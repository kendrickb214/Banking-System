//
// Created by kendr on 1/16/2021.
//

#include <iostream>
#include "Account_Util.h"



void display(const std::vector<Account *> &accounts){
     std::cout << "\n=== Accounts ==========================================" << std::endl;
     for (const auto acc: accounts)
         std::cout << *acc << std::endl;
}


void deposit(std::vector<Account *> &accounts, double amount) {

    std::cout << "\n=== Depositing to Accounts ==========================" << std::endl;
    for (const auto acc:accounts) {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }

}

void withdraw(std::vector<Account *> &accounts, double amount) {

    std::cout << "\n=== Withdrawing from Accounts ==========================" << std::endl;
    for (const auto acc:accounts) {
        if (acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;

    }
}

