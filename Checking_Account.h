//
// Created by kendr on 1/16/2021.
//

#ifndef NEW_CHECKING_ACCOUNT_H
#define NEW_CHECKING_ACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
protected:
    std::string name;
    double balance;
public:

    Checking_Account(std::string name = def_name, double balance = def_balance);

    virtual bool deposit(double amount) ;
    virtual bool withdraw(double amount) ;
    virtual void print(std::ostream &os) const override {
       os << "[Checking_Account: " << name << ": " << balance  << "]";
    }
    virtual ~Checking_Account(){}
    // Inherits the Account::deposit method
};

#endif //NEW_CHECKING_ACCOUNT_H

