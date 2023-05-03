//
// Created by h4zem on 5/3/2023.
//

#ifndef CHALLENGE__3__TRUST_ACCOUNT_H
#define CHALLENGE__3__TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    int def_withdraw;
    std::string name;
    double balance;
    double int_rate;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};


#endif //CHALLENGE__3__TRUST_ACCOUNT_H
