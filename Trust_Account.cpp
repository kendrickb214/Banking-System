//
// Created by kendr on 1/16/2021.
//

#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
        : Savings_Account {name, balance, int_rate}, num_withdrawals {0}  {

}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount < 0)
        return false;
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    balance += amount;
    return true;

}

// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        if (balance - amount >= 0) {
            balance -= amount;
            return true;
        } else
            return false;

    }
}
