#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount()
{
	rate = 0.0;
	balance = 0.0;
	accNumber = 0;
	
}
BankAccount::BankAccount(double r, double b, int a)
{
	rate = r;
	balance = b;
	accNumber = a;
}

int BankAccount::WithdrawlFunds(double w)
{
	

	if (w < 0)
	{
		cout << "No negative withdrawls." << endl;				//This form of withdrawl is only used in CheckingAccount which has no updated function
		return -1;
	}
	if (w <= balance)
	{
		balance = balance - w;
		return 0;
	}
	if (w > balance)
	{
		cout << "Balance is too low for that large a withdrawl!" << endl;
		return -1;
	}
	else
	{
		return -1;
	}
	
}

int BankAccount::DepositFunds(double d)
{
	double deposit = d;
	if (deposit > 0)
	{
		balance = balance + deposit;
		return 0;
	}
	if (deposit < 0)
	{
		cout << "No negative deposits.";
		return -1;
	}
	else
	{
		return -1;
	}
}

void BankAccount::AssessInterest()
{
													//Virtual void functions with no decleration to be used/declared by certain derived functions
}
void BankAccount::OrderChecks()
{

}
void BankAccount::LowBalance()
{

}
void BankAccount::Display()
{
	cout << "Acct Number: #" << accNumber << "Balance: $" << balance << "Interest rate: " << rate << "%" << endl;
}
