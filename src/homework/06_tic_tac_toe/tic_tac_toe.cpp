#include "tic_tac_toe.h"
#include <iostream>

void TicTacToe::start_game(std::string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

bool TicTacToe::game_over()
{
    if (check_row_win() || check_column_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";  // C for tie
        return true;
    }
    return false;
}

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6])
            return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i += 3)
    {
        if (pegs[i] != " " && pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2])
            return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
        return true;

    if (pegs[6] != " " && pegs[6] == pegs[4] && pegs[6] == pegs[2])
        return true;

    return false;
}

bool TicTacToe::check_board_full()
{
    for (auto slot : pegs)
    {
        if (slot == " ")
            return false;
    }
    return true;
}

void TicTacToe::set_winner()
{
    winner = (player == "X") ? "O" : "X";
}

void TicTacToe::set_next_player()
{
    player = (player == "X") ? "O" : "X";
}

void TicTacToe::clear_board()
{
    for (auto& slot : pegs)
    {
        slot = " ";
    }
}

void TicTacToe::display_board() const
{
    std::cout << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << "\n";
    std::cout << "--+---+--\n";
    std::cout << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << "\n";
    std::cout << "--+---+--\n";
    std::cout << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << "\n";
}
