#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"  
#include <iostream>

int main() {
    TicTacToeManager manager;  
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
        
        manager.save_game(game);
        
        int o_wins, x_wins, ties;
        manager.get_winner_total(o_wins, x_wins, ties);
        std::cout << "\n=== SCOREBOARD ===\n";
        std::cout << "X wins: " << x_wins << "\n";
        std::cout << "O wins: " << o_wins << "\n";
        std::cout << "Ties: " << ties << "\n";
        std::cout << "==================\n";
        std::cout << "\nPlay again? (y/n): ";
        std::cin >> continue_game;
    }
    
    std::cout << "\nFinal Scores:\n";
    int o_wins, x_wins, ties;
    manager.get_winner_total(o_wins, x_wins, ties);
    std::cout << "X wins: " << x_wins << "\n";
    std::cout << "O wins: " << o_wins << "\n";
    std::cout << "Ties: " << ties << "\n";
    std::cout << "\nThanks for playing!\n";
    
    return 0;
}