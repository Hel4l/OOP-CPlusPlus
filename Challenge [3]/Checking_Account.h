//
// Created by h4zem on 5/3/2023.
//

#ifndef CHALLENGE__3__CHECKING_ACCOUNT_H
#define CHALLENGE__3__CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
protected:
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};


#endif //CHALLENGE__3__CHECKING_ACCOUNT_H
