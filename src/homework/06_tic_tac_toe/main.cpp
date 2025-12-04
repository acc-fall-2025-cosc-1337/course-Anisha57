#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>

int main() {
    TicTacToeManager manager;
    std::string first_player;
    char continue_game = 'y';
    
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    
    while (continue_game == 'y' || continue_game == 'Y') {
        
        int game_type;
        std::cout << "\nEnter game type:\n";
        std::cout << "3 - TicTacToe 3x3\n";
        std::cout << "4 - TicTacToe 4x4\n";
        std::cout << "Choice: ";
        std::cin >> game_type;
        
        std::unique_ptr<TicTacToe> game;
        if (game_type == 3) {
            game = std::make_unique<TicTacToe3>();
        } else if (game_type == 4) {
            game = std::make_unique<TicTacToe4>();
        } else {
            std::cout << "Invalid choice! Defaulting to 3x3.\n";
            game = std::make_unique<TicTacToe3>();
        }
        
        do {
            std::cout << "Enter first player (X or O): ";
            std::cin >> first_player;
            
            if (first_player != "X" && first_player != "O" && 
                first_player != "x" && first_player != "o") {
                std::cout << "Invalid input! Please enter X or O.\n";
            }
        } while (first_player != "X" && first_player != "O" && 
                 first_player != "x" && first_player != "o");
        
        if (first_player == "x") first_player = "X";
        if (first_player == "o") first_player = "O";
        
        game->start_game(first_player);
        
        while (!game->game_over()) {
            game->display_board();
            
            int position;
            std::cout << "Player " << game->get_player() << " enter position: ";
            std::cin >> position;
            
            game->mark_board(position);
        }
        
        game->display_board();
        
        std::string winner = game->get_winner();
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
    
    manager.display_games();
    
    std::cout << "\nThanks for playing!\n";
    return 0;
}