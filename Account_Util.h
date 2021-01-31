//
// Created by kendr on 1/16/2021.
//

#ifndef NEW_ACCOUNT_UTIL_H
#define NEW_ACCOUNT_UTIL_H

#include <vector>
#include "Account.h"


// Utility helper functions for Account * class



void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);



#endif //NEW_ACCOUNT_UTIL_H
