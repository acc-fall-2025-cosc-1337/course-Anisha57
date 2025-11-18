#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

class TicTacToe
{
public:
    void start_game(std::string first_player);
    void mark_board(int position);
    bool game_over();
    std::string get_player() const { return player; }
    void display_board() const;
    std::string get_winner() const { return winner; }

private:
    std::string player;
    std::vector<std::string> pegs = std::vector<std::string>(9, " ");
    std::string winner = " ";

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    bool check_board_full();
    void set_next_player();
    void clear_board();
    void set_winner();
};

#endif
