#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToe game;
    std::string first_player;
    char continue_game = 'y';
    
    std::cout << "Enter first player (X or O): ";
    std::cin >> first_player;
    
    game.start_game(first_player);
    
    while (continue_game == 'y' || continue_game == 'Y') {
        
        while (!game.game_over()) {
            game.display_board();
            std::cout << "Player " << game.get_player() << " enter position (1-9): ";
            int position;
            std::cin >> position;
            game.mark_board(position);
        }
        
        game.display_board();
        std::cout << "Game over!\n";
        
        std::cout << "Play again? (y/n): ";
        std::cin >> continue_game;
        
        if (continue_game == 'y' || continue_game == 'Y') {
            std::cout << "Enter first player (X or O): ";
            std::cin >> first_player;
            game.start_game(first_player); 
        }
    }
    
    return 0;
}
