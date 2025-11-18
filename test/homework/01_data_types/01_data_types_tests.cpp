// test/homework/01_data_types/01_data_types_tests.cpp
#include <iostream>
#include "../../../src/homework/01_data_types/data_types.h"
using namespace std;

int main()
{
    cout << "Testing multiply_numbers function:\n";

    int result1 = multiply_numbers(7, 7);
    cout << "7 x 7 = " << result1 << endl;

    int result2 = multiply_numbers(5, 5);
    cout << "5 x 5 = " << result2 << endl;

    if (result1 == 49 && result2 == 25)
        cout << "✅ All tests passed!\n";
    else
        cout << "❌ Test failed!\n";

    return 0;
}

