#pragma once
#include "SavingsAccount.hpp"

class TrustAccount : public SavingsAccount {
public:
    TrustAccount(std::string name = name_, double balance = balance_, double rate = rate_);
    virtual ~TrustAccount() = default;
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
    void print(std::ostream &os) const override;

private: 
    static constexpr const char *name_ {"Unnamed Trust Account"};
    static constexpr double balance_ {0.0};
    static constexpr double rate_ = 0.0;
    static constexpr double bonusAmount_ {50.0};
    static constexpr double bonus_ {5000};
    static constexpr int maxWithdraw_ {3};
    int counter_ {0};
};
