#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(std::string name, double balance) 
        : Account{name, balance}
        {}

bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}

bool CheckingAccount::withdraw(double amount) {
    amount += fee_;
    return Account::withdraw(amount);
}

void CheckingAccount::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Checking Account: " << name << ": " << balance << "]";
}