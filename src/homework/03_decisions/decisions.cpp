#include "decisions.h"
#include <string>

// Using if-else-if ladder
std::string get_letter_grade_using_if(int numerical_grade)
{
    if (numerical_grade >= 90 && numerical_grade <= 100) return "A";
    else if (numerical_grade >= 80 && numerical_grade <= 89) return "B";
    else if (numerical_grade >= 70 && numerical_grade <= 79) return "C";
    else if (numerical_grade >= 60 && numerical_grade <= 69) return "D";
    else if (numerical_grade >= 0  && numerical_grade <= 59) return "F";
    else return "Invalid"; // out of expected range
}

// Using switch - we use integer division to map ranges to cases
std::string get_letter_grade_using_switch(int numerical_grade)
{
    if (numerical_grade < 0 || numerical_grade > 100) return "Invalid";

    int tens = numerical_grade / 10; // 100 -> 10, 95 -> 9, 89 -> 8, etc.

    switch (tens) {
        case 10: // 100
        case 9:  // 90 - 99
            return "A";
        case 8:  // 80 - 89
            return "B";
        case 7:  // 70 - 79
            return "C";
        case 6:  // 60 - 69
            return "D";
        default: // 0 - 5 -> F
            return "F";
    }
}
