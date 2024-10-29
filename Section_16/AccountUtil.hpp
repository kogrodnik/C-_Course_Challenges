#pragma once
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include <vector>
// Utility helper functions for Account class

void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);
