#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b) {
    update_winner_count(b->get_winner()); 
    games.push_back(std::move(b)); 
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t) {
    o = o_win;
    w = x_win;
    t = ties;
}

void TicTacToeManager::display_games() const {
    std::cout << "\n=== GAME HISTORY ===\n";
    for (const auto& game : games) { 
        game->display_board();  
        std::cout << "Winner: " << game->get_winner() << "\n";
    }
}

void TicTacToeManager::update_winner_count(std::string winner) {
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else {
        ties++;
    }
}