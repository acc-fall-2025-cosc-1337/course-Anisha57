// main.cpp
#include <iostream>
#include "hwexpressions.h"

using std::cout;
using std::cin;

int main()
{
    double meal_amount;
    double tip_rate;

    cout << "Enter meal amount: ";
    cin >> meal_amount;

    cout << "Enter tip rate (use decimal, for example 0.15 for 15%): ";
    cin >> tip_rate;

    double tax = get_sales_tax_amount(meal_amount);
    double tip = get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + tax + tip;

    cout << "\n--- Receipt ---\n";
    cout << "Meal Amount:   " << meal_amount << "\n";
    cout << "Sales Tax:     " << tax << "\n";
    cout << "Tip Amount:    " << tip << "\n";
    cout << "Total:         " << total << "\n";

    return 0;
}

