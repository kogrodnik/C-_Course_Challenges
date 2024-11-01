#include "SavingsAccount.hpp"
#include "AccountUtil.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main() {
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larrys_account;
    try {
        larrys_account = std::make_unique<SavingsAccount>("Larry", -2000.0);
        std::cout << *larrys_account << std::endl;
    } catch (const IllegalBalanceException& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {
        moes_account = std::make_unique<SavingsAccount>("Moe", 1000.0);
        std::cout << *moes_account << std::endl;
        moes_account->withdraw(500.0);
        std::cout << *moes_account << std::endl;
        moes_account->withdraw(1000.0);
        std::cout << *moes_account << std::endl;

    } catch (const IllegalBalanceException& ex) {
        std::cerr << ex.what() << std::endl;
    } catch (const InsufficientFundsException& ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << '\n';
    return 0;
}
