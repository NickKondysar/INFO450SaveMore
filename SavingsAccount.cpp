#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double r, double b, int a) : BankAccount(r, b, a)
{
	
}

SavingsAccount::SavingsAccount() : BankAccount()
{
	
}

void SavingsAccount::updateInterest()
{
	if (balance >= 10000)				//update interest to %2 if balance is >10000
	{
		rate = .02;
	}
	if (balance < 10000)				
	{
		rate = .01;
	}
	else
	{
	}
	
}



void SavingsAccount::AssessInterest()
{
	updateInterest();							//Accumulate interest, updates interest before and after for accuracy
	balance = (balance * (rate/12)) + balance;	//Make sure interest is monthly
	updateInterest();
}

int SavingsAccount::WithdrawlFunds(double w)
{
	if ((balance - 2) - w > 0)					//Check if balance is able to handle withdrawl + fee
	{
		balance = balance - 2;
		balance = balance - w;
		updateInterest();						//Withdrawl and charge fee
		return 0;
	}
	else
	{
		cout << "Not enough funds." << endl;
		return -1;
	}
	
}


void SavingsAccount::Display()
{
	cout << "Account Number: " << accNumber << " Interest rate: " << rate << " Balance: " << balance << endl;
}

