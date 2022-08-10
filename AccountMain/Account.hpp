#pragma once

class Account
{
private:
	int _balance = 0;
public:
	Account();
	void payment(int amountOfMoney);
	void withdraw(int amountOfMoney);
	int giveBalance();
};