#pragma once
#include "BankAccount.h"
class SavingsAccount : public BankAccount
{
private:
	void updateInterest();

public:
	SavingsAccount();
	SavingsAccount(double r, double b, int a);
	int WithdrawlFunds(double w);
	
	void AssessInterest();
	void Display();
};