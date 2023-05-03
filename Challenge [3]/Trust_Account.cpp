//
// Created by h4zem on 5/3/2023.
//

#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
        : Savings_Account(name, balance, int_rate), def_withdraw{0} {

}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000) {
        return Savings_Account::deposit(amount + 50);
    } else {
        return Savings_Account::deposit(amount);
    }
}

bool Trust_Account::withdraw(double amount) {
    if (amount < ((balance * 20) / 100)) {
        if (def_withdraw < 4) {
            return Savings_Account::withdraw(amount);
            def_withdraw++;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}