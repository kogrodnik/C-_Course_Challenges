#pragma once
#include "SavingsAccount.hpp"

class TrustAccount : public SavingsAccount {

friend std::ostream &operator << (std::ostream &os, const TrustAccount &account);

public:
    TrustAccount(std::string name = name_, double balance = balance_, double rate = rate_);
    bool deposit(double amount);
    bool withdraw(double amount);

private: 
    static constexpr const char *name_ {"Unnamed Trust Account"};
    static constexpr double balance_ {0.0};
    static constexpr double rate_ = 0.0;
    static constexpr double bonusAmount_ {50.0};
    static constexpr double bonus_ {5000};
    static constexpr int maxWithdraw_ {3};
    int counter_ {0};
};
