//
// Created by kendr on 1/17/2021.
//
#include <iostream>
#ifndef NEW_I_PRINTABLE_H
#define NEW_I_PRINTABLE_H
class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
        obj.print(os);
        return os;
    }
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() {};


};

#endif //NEW_I_PRINTABLE_H
