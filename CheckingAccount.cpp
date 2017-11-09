#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double r, double b, int a) : BankAccount(r, b, a)
{

}

CheckingAccount::CheckingAccount() : BankAccount()
{

}

void CheckingAccount::LowBalance()
{												
	if (balance < 500.00 && balance >= 5.00)	//If balance is too low but at least $5, take $5
	{
		balance = balance - 5.00;
		
	}
	else 
	{
			
	}
}

void CheckingAccount::OrderChecks()
{
	if (balance > 15.00)						//If balance can pay for checks, get checks
	{
		balance = balance - 15.00;
		LowBalance();
		
	}
	else
	{
		cout << "Balance too low.";
		
	}
}

void CheckingAccount::Display()
{
	cout << "Account Number: #" << accNumber << " Interest rate: " << rate << "%" << " Balance: $" << balance << endl;
}

