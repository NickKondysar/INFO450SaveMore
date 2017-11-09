#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "CertificateAccount.h"
using namespace std;

CertificateAccount::CertificateAccount(double r, double b, int a, int t) : BankAccount(r, b, a)
{
	term = t;
}

CertificateAccount::CertificateAccount() : BankAccount()
{
	term = 0;
} 
void CertificateAccount::AssessInterest()
{
	if (term >= 5)
	{
		rate = .10;										//Update interest if term is atleast 5, note new rate doesnt show till this function is run atleast once
		balance = ((rate/12) * balance) + balance;
		
	}
	if (term < 5)
	{
		balance = ((rate/12) * balance) + balance;		//else
		
	}

}

int CertificateAccount::WithdrawlFunds(double w)
{
		
	if ((balance*.9) > w && w > 0)						//If balance after the %10 fee and withdrawl is still positive
	{
		balance = balance * .9;							//Take %10
		balance = balance - w;							//Withdrawl money
		return 0;
	}
	else
	{	
		cout << "Withdrawl Failed." << endl;
		return -1;
	}

}




void CertificateAccount::Display()
{
	cout << "Account Number: " << accNumber << " Interest rate: " << rate << " Balance: " << balance << " Term: " << term << endl;
}

