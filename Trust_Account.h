//
// Created by kendr on 1/16/2021.
//

#ifndef NEW_TRUST_ACCOUNT_H
#define NEW_TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = def_name,  double balance = def_balance, double int_rate = def_int_rate);

    // Deposits of $5000.00 or more will receive $50 bonus
    bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override {
       os << "[Trust Account: " << name << ": " << balance << ", " << int_rate
          << "%, withdrawals: " << num_withdrawals <<  "]";
    }

    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    bool withdraw(double amount) override;
    virtual ~Trust_Account() = default;
};
#endif //NEW_TRUST_ACCOUNT_H
