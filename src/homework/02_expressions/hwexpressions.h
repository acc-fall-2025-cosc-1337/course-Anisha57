#ifndef HWEXPRESSIONS_H
#define HWEXPRESSIONS_H

const double TAX_RATE = 0.0675;  // 6.75%

double get_sales_tax_amount(double meal_amount);
double get_tip_amount(double meal_amount, double tip_rate);

#endif
