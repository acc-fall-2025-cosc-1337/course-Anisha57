#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Test multiply_numbers")
{
    REQUIRE(multiply_numbers(7, 7) == 49);
    REQUIRE(multiply_numbers(5, 5) == 25);
    REQUIRE(multiply_numbers(3, 4) == 12);
}
