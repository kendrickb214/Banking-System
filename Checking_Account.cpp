//
// Created by kendr on 1/16/2021.
//

#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
        : name{name}, balance{balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

bool Checking_Account::deposit(double amount) {
if (amount < 0)
  return false;
  else {
 balance += amount;
 //std::cout << balance << std::endl;
 return true;
 }
}

