#include "tic_tac_toe.h"
#include <iostream>

int main()
{
    TicTacToe game;

    std::string player;
    std::cout << "Enter first player (X or O): ";
    std::cin >> player;

    game.start_game(player);

    int position;
    while (!game.game_over())
    {
        std::cout << "Enter position (1-9): ";
        std::cin >> position;

        game.mark_board(position);
        game.display_board();
        std::cout << "\n";
    }

    std::cout << "Game over! Board is full.\n";

    return 0;
}
