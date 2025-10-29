#include <iostream>
#include <vector>
#include <utility>
#include "homework/03_decisions/decisions.h"


int main()
{
    // Tests: pair<input, expected-letter>
    std::vector<std::pair<int, std::string>> tests = {
        {95, "A"},
        {85, "B"},
        {75, "C"},
        {65, "D"},
        {50, "F"}
    };

    int total = 0;
    int passed = 0;

    // Test get_letter_grade_using_if
    std::cout << "Testing get_letter_grade_using_if:\n";
    for (const auto &tc : tests) {
        ++total;
        int input = tc.first;
        std::string expected = tc.second;
        std::string actual = get_letter_grade_using_if(input);
        if (actual == expected) {
            ++passed;
            std::cout << " PASS: " << input << " -> " << actual << "\n";
        } else {
            std::cout << " FAIL: " << input << " expected " << expected << " but got " << actual << "\n";
        }
    }

    // Test get_letter_grade_using_switch
    std::cout << "\nTesting get_letter_grade_using_switch:\n";
    for (const auto &tc : tests) {
        ++total;
        int input = tc.first;
        std::string expected = tc.second;
        std::string actual = get_letter_grade_using_switch(input);
        if (actual == expected) {
            ++passed;
            std::cout << " PASS: " << input << " -> " << actual << "\n";
        } else {
            std::cout << " FAIL: " << input << " expected " << expected << " but got " << actual << "\n";
        }
    }

    std::cout << "\nSummary: Passed " << passed << " / " << total << " tests.\n";

    return (passed == total) ? 0 : 2;
}
