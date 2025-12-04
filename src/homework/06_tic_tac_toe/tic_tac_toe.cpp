#include "tic_tac_toe.h"
#include <iostream>
#include <cmath>

bool TicTacToe::game_over() {
    if (check_column_win() || check_row_win() || check_diagonal_win()) {
        set_winner();
        return true;
    }
    
    if (check_board_full()) {
        winner = "C"; 
        return true;
    }
    
    return false;
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
    int size = std::sqrt(pegs.size());
    std::cout << "\n";
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << pegs[i * size + j];
            if (j < size - 1) {
                std::cout << "|";
            }
        }
        std::cout << "\n";
        
        if (i < size - 1) {
            for (int j = 0; j < size; j++) {
                std::cout << "-";
                if (j < size - 1) {
                    std::cout << "+";
                }
            }
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}

std::string TicTacToe::get_winner() const {
    return winner;
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

bool TicTacToe::check_board_full() {
    for (size_t i = 0; i < pegs.size(); i++) {
        if (pegs[i] == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    for (size_t i = 0; i < pegs.size(); i++) {
        pegs[i] = " ";
    }
    winner = "";
}


bool TicTacToe::check_column_win() {
    return false;
}

bool TicTacToe::check_row_win() {
    return false;
}

bool TicTacToe::check_diagonal_win() {
    return false;
}

void TicTacToe::set_winner() {
    if (player == "X") {
        winner = "O";
    } else {
        winner = "X";
    }
}