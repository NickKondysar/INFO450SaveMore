#pragma once
#include "BankAccount.h"
class CertificateAccount : public BankAccount
{
private:
	int term;

public:
	CertificateAccount();
	CertificateAccount(double r, double b, int a, int t);
	int WithdrawlFunds(double w);
	void AssessInterest();
	void Display();
};