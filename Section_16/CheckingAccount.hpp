#pragma once
#include "Account.hpp"
#include <iostream>
#include <string>

class CheckingAccount : public Account{
public: 
    CheckingAccount(std::string name = name_, double balance = balance_);
    virtual ~CheckingAccount() = default;
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
    void print(std::ostream &os) const override;

private:
    static constexpr const char *name_ {"Unnamed Checking Account"};
    static constexpr double balance_ {0.0};
    static constexpr double fee_ {1.5};
};