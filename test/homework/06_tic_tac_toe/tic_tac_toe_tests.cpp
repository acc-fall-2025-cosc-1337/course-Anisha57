#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"  


TEST_CASE("Test first player set to X") {
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O") {
    TicTacToe game;
    game.start_game("O");
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected - tie") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    
    game.mark_board(8);
    REQUIRE(game.game_over() == true);
    
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1); 
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(4);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(7);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(8);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(6);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(9);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by first row") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(4);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(4);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(6);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(7);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(8);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(9);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}


TEST_CASE("Test win diagonally from top left") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(9);   
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}


TEST_CASE("Test win diagonally from bottom left") {
    TicTacToe game;
    game.start_game("X");
    
    REQUIRE(game.game_over() == false);
    
    game.mark_board(7);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(1);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(5);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(2);  
    REQUIRE(game.game_over() == false);
    
    game.mark_board(3);  
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}
TEST_CASE("Test TicTacToeManager get winner total") {
    TicTacToeManager manager;
    
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);  
    game1.mark_board(2);  
    game1.mark_board(4);  
    game1.mark_board(5);  
    game1.mark_board(7);   
    manager.save_game(game1);
    
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);  
    game2.mark_board(4);  
    game2.mark_board(2);  
    game2.mark_board(5);  
    game2.mark_board(3);   
    manager.save_game(game2);
    
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);  
    game3.mark_board(2);  
    game3.mark_board(3);  
    game3.mark_board(4);  
    game3.mark_board(5);  
    game3.mark_board(7);  
    game3.mark_board(6);  
    game3.mark_board(9);  
    game3.mark_board(8);   
    manager.save_game(game3);
    
    TicTacToe game4;
    game4.start_game("X");
    game4.mark_board(1);  
    game4.mark_board(4);  
    game4.mark_board(2);  
    game4.mark_board(5);  
    game4.mark_board(3);  
    manager.save_game(game4);
    
    int o_wins, x_wins, tie_count;
    manager.get_winner_total(o_wins, x_wins, tie_count);
    


    // for debugging
    std::cout << "DEBUG: o_wins = " << o_wins << std::endl;
    std::cout << "DEBUG: x_wins = " << x_wins << std::endl;
    std::cout << "DEBUG: tie_count = " << tie_count << std::endl;
    
    REQUIRE(x_wins == 2);  
    REQUIRE(o_wins == 1);  
    REQUIRE(tie_count == 1); 
}