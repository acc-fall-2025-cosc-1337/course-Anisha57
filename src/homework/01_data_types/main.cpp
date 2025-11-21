#include <iostream>
#include "data_types.h"

int main() {
    // Display 7 x 7 = 49
    int result1 = multiply_numbers(7, 7);
    std::cout << "7 x 7 = " << result1 << std::endl;
    
    // Display 5 x 5 = 25  
    int result2 = multiply_numbers(5, 5);
    std::cout << "5 x 5 = " << result2 << std::endl;
    
    return 0;
}
