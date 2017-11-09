#pragma once
#include <string>
using namespace std;

class BankAccount
{
protected:
	double rate;
	double balance;
	int accNumber;
public:
	BankAccount();
	BankAccount(double r, double b, int a);
	virtual int WithdrawlFunds(double w);
	virtual int DepositFunds(double d);
	virtual void Display();
	virtual void AssessInterest();
	virtual void OrderChecks();
	virtual void LowBalance();
};