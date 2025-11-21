#ifndef HWEXPRESSIONS_H
#define HWEXPRESSIONS_H

// Sales tax rate
const double tax_rate = 0.0675;

// Function declarations
double get_sales_tax_amount(double meal_amount);
double get_tip_amount(double meal_amount, double tip_rate);

#endif // HWEXPRESSIONS_H
