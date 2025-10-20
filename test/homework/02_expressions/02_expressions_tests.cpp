// test/homework/02_expressions/02_expressions_tests.cpp
#include "hwexpressions.h"
#include <cassert>
#include <iostream>

int main()
{
    // Test sales tax calculation
    assert(get_sales_tax_amount(100) == 6.75);
    assert(get_sales_tax_amount(50) == 3.375);

    // Test tip calculation
    assert(get_tip_amount(100, 0.20) == 20);
    assert(get_tip_amount(50, 0.15) == 7.5);

    std::cout << "All tests passed successfully!\n";
    return 0;
}
