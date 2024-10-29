#include "TrustAccount.hpp"

TrustAccount::TrustAccount(std::string name, double balance, double rate) 
    : SavingsAccount{name, balance, rate}, counter_ {0}
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

void TrustAccount::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[TrustAccount: " << name << ": " << balance << ", " << int_rate << "%, withdraw: " << counter_ << "]";
}