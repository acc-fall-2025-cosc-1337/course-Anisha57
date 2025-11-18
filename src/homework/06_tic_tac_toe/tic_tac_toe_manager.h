#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <vector>
#include <string>
#include "TicTacToe.h"  // include your TicTacToe class

class TicTacToeManager
{
private:
    std::vector<TicTacToe> games;  // stores all games
    int x_win{0};
    int o_win{0};
    int ties{0};

    void update_winner_count(const std::string& winner);

public:
    void save_game(TicTacToe b);  // adds a game and updates counts
    void get_winner_total(int& x, int& o, int& t);  // get totals
};

#endif
