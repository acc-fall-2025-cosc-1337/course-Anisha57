#include "tic_tac_toe_manager.h"
#include <iostream>

// Save a game and update winner counts
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);  // store the game
    update_winner_count(b.get_winner()); // update x, o, tie count
}

// Update winner counts
void TicTacToeManager::update_winner_count(const std::string& winner)
{
    if (winner == "X")
        x_win++;
    else if (winner == "O")
        o_win++;
    else
        ties++;
}

// Return totals via reference
void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}
