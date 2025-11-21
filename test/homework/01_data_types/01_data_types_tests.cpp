#include "src/homework/01_data_types/data_types.h"
#include <cassert>
#include <iostream>

// Test function for multiply_numbers
void test_multiply_numbers() {
    // Test case 1: 7 x 7 = 49
    assert(multiply_numbers(7, 7) == 49);
    
    // Test case 2: 5 x 5 = 25
    assert(multiply_numbers(5, 5) == 25);
    
    // Test case 3: Positive numbers
    assert(multiply_numbers(3, 4) == 12);
    
    // Test case 4: With zero
    assert(multiply_numbers(0, 5) == 0);
    
    // Test case 5: Negative numbers
    assert(multiply_numbers(-3, 4) == -12);
    
    std::cout << "All test cases passed!" << std::endl;
}

int main() {
    test_multiply_numbers();
    return 0;
}
