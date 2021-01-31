//
// Created by kendr on 1/16/2021.
//

#ifndef NEW_ACCOUNT_H
#define NEW_ACCOUNT_H

#include <iostream>
#include <string>
#include "I_Printable.h"
#include <vector>

class Account:  public I_Printable {

public:
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const = 0;
    virtual ~Account(){}


};

#endif //NEW_ACCOUNT_H
