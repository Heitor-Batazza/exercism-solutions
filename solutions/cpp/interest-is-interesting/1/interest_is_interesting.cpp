// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    if (balance < 0) {
        return 3.213;
    } else if (balance < 1000) {
        return 0.5;
    } else if (balance < 5000) {
        return 1.621;
    } else {
        return 2.475;
    }
}

double yearly_interest(double balance) {
    if (balance < 0) {
        return 3.213/100 * balance;
    } else if (balance < 1000) {
        return 0.5/100 * balance;
    } else if (balance < 5000) {
        return 1.621/100 * balance;
    } else {
        return 2.475/100 * balance;
    }
}

double annual_balance_update(double balance) {
    if (balance < 0) {
        return 3.213/100 * balance + balance;
    } else if (balance < 1000) {
        return 0.5/100 * balance + balance;
    } else if (balance < 5000) {
        return 1.621/100 * balance + balance;
    } else {
        return 2.475/100 * balance + balance;
    }
}

int years_until_desired_balance(double balance, double target_balance) {
    int count = 0;
    while (balance < target_balance) {
        count++;
        balance = annual_balance_update(balance);

    }
    return count;
}
