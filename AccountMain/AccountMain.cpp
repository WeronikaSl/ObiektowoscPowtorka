#include <iostream>
#include "Account.hpp"


int main()
{
    Account account1;
    std::cout << account1.giveBalance() << std::endl;
    account1.payment(200);
    std::cout << account1.giveBalance() << std::endl;
    account1.withdraw(500);
    std::cout << account1.giveBalance() << std::endl;

}
