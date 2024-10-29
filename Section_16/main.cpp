#include "SavingsAccount.hpp"
#include "AccountUtil.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include <iostream>
#include <vector>

int main() {
   SavingsAccount s {"Frank", 5000, 2.6};
   std::cout << s << '\n';
   s.deposit(10000);
   std::cout << s << '\n';
   s.withdraw(10000);
   std::cout << s << '\n';
    
    
    Account *ptr = new TrustAccount("Leo", 10000, 2.6);
    std::cout << *ptr << '\n';

   CheckingAccount frank {"Frank", 5000};
   std::cout << frank << '\n';
   
   Account *trust = new TrustAccount("James");
   std::cout << *trust << '\n';
   
   Account *p1 = new CheckingAccount("Larry", 10000);
   Account *p2 = new SavingsAccount("Moe", 1000);
   Account *p3 = new TrustAccount("Curly");
   
   std::vector<Account *> accounts {p1,p2,p3};
   
   display(accounts);
   deposit(accounts, 1000);
   withdraw(accounts, 2000);
   
   display(accounts);
   
   delete p1;
   delete p2;
   delete p3;
    
    return 0;
}
