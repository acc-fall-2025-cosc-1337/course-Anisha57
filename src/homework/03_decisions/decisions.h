#ifndef DECISIONS_H
#define DECISIONS_H

#include <string>

// Return letter grade using if-else-if
// Precondition: numerical_grade is in [0,100] (main will validate)
std::string get_letter_grade_using_if(int numerical_grade);

// Return letter grade using switch (you may call with 0..100)
std::string get_letter_grade_using_switch(int numerical_grade);

#endif // DECISIONS_H
