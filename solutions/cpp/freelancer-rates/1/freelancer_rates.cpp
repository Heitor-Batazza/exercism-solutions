#include <iostream>
#include <cmath>

double daily_rate(double hourly_rate) {
    double daily_rate = 8 * hourly_rate;
    return daily_rate;
}

double apply_discount(double before_discount, double discount) {
    double discounted_price = (1 - discount/100) * before_discount;
    return discounted_price;
}

int monthly_rate(double hourly_rate, double discount) {
    double discounted_monthly_rate = std::ceil((1 - discount/100) * (22 * 8 * hourly_rate));
    return discounted_monthly_rate;
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    double complete_days = std::floor(budget / ((1 - discount/100) * (8 * hourly_rate)));
    return complete_days;
}
