#define CATCH_CONFIG_MAIN  // Catch provides main() here
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Verify add_numbers function") {
    REQUIRE(add_numbers(5, 5) == 10);
    REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify multiply_numbers function") {
    REQUIRE(multiply_numbers(7, 7) == 49);
    REQUIRE(multiply_numbers(5, 5) == 25);
}
