#include "tic_tac_toe.h"
#include <iostream>


bool TicTacToe::game_over() {
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    int index = position - 1;
    pegs[index] = player;
    set_next_player();
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    std::cout << "\n";
    std::cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
    std::cout << "-+-+-\n";
    std::cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << "\n";
    std::cout << "-+-+-\n";
    std::cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n";
    std::cout << "\n";
}


void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

bool TicTacToe::check_board_full() {
    for (int i = 0; i < 9; i++) {
        if (pegs[i] == " ") {
            return false;  
        }
    }
    return true;  
}

void TicTacToe::clear_board() {
    for (int i = 0; i < 9; i++) {
        pegs[i] = " ";
    }
}