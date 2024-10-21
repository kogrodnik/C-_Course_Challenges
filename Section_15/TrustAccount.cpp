#include "TrustAccount.hpp"

TrustAccount::TrustAccount(std::string name, double balance, double rate) 
    : SavingsAccount{name, balance, rate}
    {}

bool TrustAccount::deposit(double amount) {
    if (amount >= bonus_) {
        amount += bonusAmount_;
    }
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) {
    if (counter_ >= maxWithdraw_) {
        return false;
    }
    counter_++;
    return SavingsAccount::withdraw(amount);
}

std::ostream &operator << (std::ostream &os, const TrustAccount &account) {
    os << "[TrustAccount: " << account.name_ << ": " << account.balance_ << ", " << account.rate_ << "%, withdraw: " << account.counter_ << "]";
    return os;
}