//
// Created by kendr on 1/16/2021.
//

#ifndef NEW_SAVINGS_ACCOUNT_H
#define NEW_SAVINGS_ACCOUNT_H

#include "Account.h"

// Savings Account is a type of Account
//   adds an interest rate
// Withdraw - same as a regular account
// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100)
//      and then the updated amount will be deposited
//

class Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);

    virtual bool deposit(double amount) override ;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override {
       os << "[Savings_Account: " << name << ": " << balance << ", " << int_rate << "%]";
    }
    virtual ~Savings_Account() = default;
    // Inherits the Account::withdraw methods
};

#endif //NEW_SAVINGS_ACCOUNT_H
