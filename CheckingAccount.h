#pragma once
#include "BankAccount.h"
class CheckingAccount : public BankAccount
{
private:
	void LowBalance();
	void OrderChecks();

public:
	CheckingAccount();
	CheckingAccount(double r, double b, int a);
	void Display();
};