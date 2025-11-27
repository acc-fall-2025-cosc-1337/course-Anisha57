#include "hwexpressions.h"

double get_sales_tax_amount(double meal_amount) {
    return meal_amount * TAX_RATE;
}

double get_tip_amount(double meal_amount, double tip_rate) {
    return meal_amount * tip_rate;
}
