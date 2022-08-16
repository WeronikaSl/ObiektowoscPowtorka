#include "Account.hpp"
#include <iostream>

Account::Account()
{
	_balance = 200;
	std::cout << "Account created" << std::endl;

}

Account::Account(Account& old)
{
	this->_balance = old._balance;
	std::cout << "Account created" << std::endl;

}

void Account::payment(int amountOfMoney)
{
	_balance += amountOfMoney;
}

void Account::withdraw(int amountOfMoney)
{
	if (_balance <= amountOfMoney)
	{
		std::cout << "Wypłacono: " << _balance << ". Stan konta wynosi 0" << std::endl;
		_balance = 0;
	}
	else
	{
		_balance -= amountOfMoney;
	}
}

int Account::giveBalance()
{
	return _balance;
}

Account::~Account()
{
	std::cout << "Account destroyed" << std::endl;
}
