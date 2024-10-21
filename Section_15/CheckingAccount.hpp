#pragma once
#include "Account.hpp"
#include <iostream>
#include <string>

class CheckingAccount : public Account{

friend std::ostream &operator << (std::ostream &os, const CheckingAccount &account);

public: 
    CheckingAccount(std::string name = name_, double balance = balance_);
    bool withdraw(double amount);

private:
    static constexpr const char *name_ {"Unnamed Checking Account"};
    static constexpr double balance_ {0.0};
    static constexpr double fee_ {1.5};
};