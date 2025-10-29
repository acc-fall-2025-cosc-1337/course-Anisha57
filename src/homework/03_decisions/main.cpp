#include <iostream>
#include "decisions.h"

int main()
{
    std::cout << "MAIN MENU\n\n";
    std::cout << "1-Letter grade using if\n";
    std::cout << "2-Letter grade using switch\n";
    std::cout << "3-Exit\n\n";

    std::cout << "Enter option: ";
    int option;
    if (!(std::cin >> option)) {
        std::cout << "Invalid input. Exiting.\n";
        return 1;
    }

    if (option == 3) {
        std::cout << "Exiting program.\n";
        return 0;
    } else if (option == 1 || option == 2) {
        std::cout << "Enter numerical grade (0 - 100): ";
        int grade;
        if (!(std::cin >> grade)) {
            std::cout << "Invalid input. Exiting.\n";
            return 1;
        }

        if (grade < 0 || grade > 100) {
            std::cout << "Number out of range. Please enter 0..100.\n";
            return 0;
        }

        std::string letter;
        if (option == 1) {
            letter = get_letter_grade_using_if(grade);
        } else {
            letter = get_letter_grade_using_switch(grade);
        }

        std::cout << "Letter grade: " << letter << "\n";
        return 0;
    } else {
        std::cout << "Unknown option. Exiting.\n";
        return 0;
    }
}
