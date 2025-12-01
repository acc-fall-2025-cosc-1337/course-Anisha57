#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Test get_factorial")
{
    REQUIRE(get_factorial(3) == 6);
    REQUIRE(get_factorial(5) == 120);
}

TEST_CASE("Test sum_odd_numbers")
{
    REQUIRE(sum_odd_numbers(5) == 9);   // 1+3+5
    REQUIRE(sum_odd_numbers(10) == 25); // 1+3+5+7+9
}

