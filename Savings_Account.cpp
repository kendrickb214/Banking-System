//
// Created by kendr on 1/16/2021.
//

#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
        : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100)
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount) {
    return Account::withdraw(amount);
}
