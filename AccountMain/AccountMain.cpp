#include <iostream>
#include "Account.hpp"


int main()
{
    Account account1;
    std::cout << account1.giveBalance() << std::endl;
    account1.payment(200);
    std::cout << account1.giveBalance() << std::endl;
    account1.withdraw(100);
    std::cout << account1.giveBalance() << std::endl;

    Account account2(account1);
    std::cout << account2.giveBalance() << std::endl;

}
