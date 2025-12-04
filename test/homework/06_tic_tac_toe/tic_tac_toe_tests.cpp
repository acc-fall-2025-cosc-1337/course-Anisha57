#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>

TEST_CASE("Test first player set to X") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected - tie") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1); 
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(4);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(7);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(3);  
    REQUIRE(game->game_over() == false);
    game->mark_board(8);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(3);  
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(6);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(9);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(4);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(3);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(4);  
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(6);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(7);  
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(8);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(9);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(3);  
    REQUIRE(game->game_over() == false);
    game->mark_board(9);   
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(7);  
    REQUIRE(game->game_over() == false);
    game->mark_board(1);  
    REQUIRE(game->game_over() == false);
    game->mark_board(5);  
    REQUIRE(game->game_over() == false);
    game->mark_board(2);  
    REQUIRE(game->game_over() == false);
    game->mark_board(3);  
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test first player set to X 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth column 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top right 4") {
    std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager get winner total") {
    TicTacToeManager manager;
    
    std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe3>();
    game1->start_game("X");
    game1->mark_board(1);
    game1->mark_board(2);
    game1->mark_board(4);
    game1->mark_board(5);
    game1->mark_board(7);
    manager.save_game(game1);
    
    std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe3>();
    game2->start_game("O");
    game2->mark_board(1);
    game2->mark_board(4);
    game2->mark_board(2);
    game2->mark_board(5);
    game2->mark_board(3);
    manager.save_game(game2);
    
    std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe3>();
    game3->start_game("X");
    game3->mark_board(1);
    game3->mark_board(2);
    game3->mark_board(3);
    game3->mark_board(4);
    game3->mark_board(5);
    game3->mark_board(7);
    game3->mark_board(6);
    game3->mark_board(9);
    game3->mark_board(8);
    manager.save_game(game3);
    
    std::unique_ptr<TicTacToe> game4 = std::make_unique<TicTacToe3>();
    game4->start_game("X");
    game4->mark_board(1);
    game4->mark_board(4);
    game4->mark_board(2);
    game4->mark_board(5);
    game4->mark_board(3);
    manager.save_game(game4);
    
    int o_wins, x_wins, tie_count;
    manager.get_winner_total(o_wins, x_wins, tie_count);
    
    REQUIRE(x_wins == 2);
    REQUIRE(o_wins == 1);
    REQUIRE(tie_count == 1);
}