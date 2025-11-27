#include <iostream>
#include "hwexpressions.h"
#include <iomanip> // for std::fixed and std::setprecision

int main() {
    double meal_amount;
    double tip_rate;

    std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    std::cout << "Enter the tip percentage (as decimal, e.g., 0.15 for 15%): ";
    std::cin >> tip_rate;

    double tax = get_sales_tax_amount(meal_amount);
    double tip = get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + tax + tip;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nReceipt:\n";
    std::cout << "Meal Amount:     " << meal_amount << "\n";
    std::cout << "Sales Tax:       " << tax << "\n";
    std::cout << "Tip Amount:      " << tip << "\n";
    std::cout << "Total:           " << total << "\n";

    return 0;
}

