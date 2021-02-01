//
// Created by kendr on 1/16/2021.
//

#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
        : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}
