#pragma once

class Account
{
private:
	int _balance = 0;
public:
	Account();
	Account(Account& old);
	void payment(int amountOfMoney);
	void withdraw(int amountOfMoney);
	int giveBalance();
	virtual ~Account();
};