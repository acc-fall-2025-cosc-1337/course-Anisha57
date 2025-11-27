#include <iostream>
#include "hwexpressions.h"
#include <cassert>

int main() {
    // Test sales tax
    assert(get_sales_tax_amount(20.0) == 20.0 * 0.0675);
    
    // Test tip amount
    assert(get_tip_amount(20.0, 0.15) == 20.0 * 0.15);
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
