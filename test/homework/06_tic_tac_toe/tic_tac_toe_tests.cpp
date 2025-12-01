#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Test game over when 9 positions are selected")
{
    TicTacToe game;
    game.start_game("X");

    std::vector<int> positions = {1,2,3,4,5,7,6,9,8};

    for (int i = 0; i < positions.size(); i++)
    {
        game.mark_board(positions[i]);

        // Check after EVERY move (VERY IMPORTANT!)
        if (i < 8)
        {
            REQUIRE(game.game_over() == false);
        }
        else
        {
            REQUIRE(game.game_over() == true);
        }
    }
}
