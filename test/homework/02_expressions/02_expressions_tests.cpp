// 02_expressions_tests.cpp
#include "hwexpressions.h"
#include <cassert>

int main()
{
    // Test sales tax
    assert(get_sales_tax_amount(10.0) == 0.675);
    assert(get_sales_tax_amount(20.0) == 1.35);

    // Test tip amount
    assert(get_tip_amount(20.0, 0.10) == 2.0);
    assert(get_tip_amount(50.0, 0.20) == 10.0);

    return 0;
}
