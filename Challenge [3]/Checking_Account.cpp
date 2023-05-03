//
// Created by h4zem on 5/3/2023.
//

#include "Checking_Account.h"
#include <iostream>
#include <string>

Checking_Account::Checking_Account(std::string name, double balance)
: Account(name, balance) {

}

bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount + per_check_fee);
}
std::ostream &operator<<(std::ostream& os, const Checking_Account& account){
    os << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return os;
}