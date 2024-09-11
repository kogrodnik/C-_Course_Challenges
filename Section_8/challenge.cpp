#include <iostream> 

int main() {
    int amountInCents {};
    const int dollars {100};
    const int quarters {25};
    const int dimes {10};
    const int nickels {5};
    const int pennies {1};

    std::cout << "Enter an amount in cents: "; 
    std::cin >> amountInCents;

    int dollarsAmount = amountInCents / dollars;
    amountInCents -= dollars * dollarsAmount;

    int quartersAmount = amountInCents / quarters;
    amountInCents -= quarters * quartersAmount;

    int dimesAmount = amountInCents / dimes;
    amountInCents -= dimes * dimesAmount;

    int nickelsAmount = amountInCents / nickels;
    amountInCents -= nickels * nickelsAmount;

    int penniesAmount = amountInCents / pennies;

    std::cout << "You can provide this change as follows: \n" 
            << "dollars: " << dollarsAmount << '\n'
            << "quartres: " << quartersAmount << '\n'
            << "dimes: " << dimesAmount << '\n'
            << "nickels: " << nickelsAmount << '\n'
            << "pennies: " << penniesAmount << '\n';

    return 0;
}