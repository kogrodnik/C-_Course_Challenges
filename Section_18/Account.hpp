#pragma once
#include "IllegalBalanceException.hpp"
#include "InsufficientFundsException.hpp"
#include "Printable.hpp"
#include <iostream>
#include <string>

class Account : public Printable{
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual ~Account() = default;
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    double get_balance() const;
    void print(std::ostream &os) const override;
};