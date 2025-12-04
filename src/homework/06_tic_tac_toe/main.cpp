#include "tic_tac_toe.h"
#include <iostream>

int main() {
    TicTacToe game;
    std::string first_player;
    char continue_game = 'y';
    
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    
    while (continue_game == 'y' || continue_game == 'Y') {
        
        do {
            std::cout << "\nEnter first player (X or O): ";
            std::cin >> first_player;
            
            if (first_player != "X" && first_player != "O" && 
                first_player != "x" && first_player != "o") {
                std::cout << "Invalid input! Please enter X or O.\n";
            }
        } while (first_player != "X" && first_player != "O" && 
                 first_player != "x" && first_player != "o");
        
        if (first_player == "x") first_player = "X";
        if (first_player == "o") first_player = "O";
        
        game.start_game(first_player);
        
        while (!game.game_over()) {
            game.display_board();
            
            int position;
            std::cout << "Player " << game.get_player() << " enter position (1-9): ";
            std::cin >> position;
            
            if (position < 1 || position > 9) {
                std::cout << "Invalid position! Please enter 1-9.\n";
                continue;
            }
            
            game.mark_board(position);
        }
        
        game.display_board();
        
        std::string winner = game.get_winner();
        if (winner == "C") {
            std::cout << "It's a tie!\n";
        } else {
            std::cout << "Player " << winner << " wins!\n";
        }
        
        std::cout << "\nPlay again? (y/n): ";
        std::cin >> continue_game;
    }
    
    std::cout << "Thanks for playing!\n";
    return 0;
}