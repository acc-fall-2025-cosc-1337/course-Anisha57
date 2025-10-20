// src/homework/02_expressions/main.cpp
#include <iostream>
#include <iomanip>
#include "hwexpressions.h"

using namespace std;

int main()
{
    double meal_amount, tip_rate, sales_tax_amount, tip_amount, total;

    cout << "Enter meal amount: ";
    cin >> meal_amount;

    cout << "Enter tip rate (for 15% enter 0.15): ";
    cin >> tip_rate;

    sales_tax_amount = get_sales_tax_amount(meal_amount);
    tip_amount = get_tip_amount(meal_amount, tip_rate);
    total = meal_amount + sales_tax_amount + tip_amount;

    cout << fixed << setprecision(2);
    cout << "\nReceipt:\n";
    cout << "------------------------\n";
    cout << "Meal Amount:   $" << setw(8) << meal_amount << endl;
    cout << "Sales Tax:     $" << setw(8) << sales_tax_amount << endl;
    cout << "Tip Amount:    $" << setw(8) << tip_amount << endl;
    cout << "------------------------\n";
    cout << "Total:         $" << setw(8) << total << endl;

    return 0;
}
