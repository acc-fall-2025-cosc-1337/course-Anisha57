#include "tic_tac_toe.h"
#include <iostream>

int main()
{
    TicTacToe game;
    std::string first_player;
    char choice = 'Y';

    while (choice == 'Y' || choice == 'y')
    {
        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;

        while (first_player != "X" && first_player != "O")
        {
            std::cout << "Invalid. Enter X or O: ";
            std::cin >> first_player;
        }

        game.start_game(first_player);
        int position;

        while (!game.game_over())
        {
            game.display_board();
            std::cout << "Enter position 1-9: ";
            std::cin >> position;

            while (position < 1 || position > 9)
            {
                std::cout << "Invalid. Enter 1-9: ";
                std::cin >> position;
            }

            game.mark_board(position);
        }

        game.display_board();
        std::cout << "Winner: " << game.get_winner() << "\n";

        std::cout << "Play again? (Y/N): ";
        std::cin >> choice;
    }

    return 0;
}
