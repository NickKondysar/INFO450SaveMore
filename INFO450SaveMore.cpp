#include "stdafx.h"
#include "CheckingAccount.h"
#include "CertificateAccount.h"
#include "BankAccount.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;


int main()
{
	while (1 == 1)								//didnt want to make a variable outside of the loop
	{
		char answer;
		BankAccount *bAcct1 = NULL;				//Polymorphic base class pointer
		cout << endl;
		cout << "Please enter 'c' to create a checking account, 's' to create a savings account, or 'd' to create a CD account." << endl;
		cout << "Alternatively type 'n' to end this program." << endl;
		cin >> answer;
		cin.ignore();
		cin.clear();

		if (answer == 'c' || answer == 'C')
		{
			bAcct1 = new CheckingAccount(0.0, 6000.00, 10101010);		//create Checking Account and run through requested steps
			cout << "Starting:" << endl;
			bAcct1->Display();
			cout << endl;
			bAcct1->OrderChecks();
			cout << "Ordered Checks:" << endl;							//Displays everytime anything happens to show work
			bAcct1->Display();
			cout << endl;
			cout << "Withdrawl of $200.00" << endl;
			bAcct1->WithdrawlFunds(200.00);
			bAcct1->Display();
			delete bAcct1;												//Clean up memory
			
		}

		if (answer == 'd' || answer == 'D')
		{
			bAcct1 = new CertificateAccount(.05, 10000.00, 20202020, 3);	//create CertificateAccount and run through requested steps
			cout << "Starting:" << endl;
			bAcct1->Display();
			cout << endl;
			bAcct1->AssessInterest();
			cout << "Accumulate Interest:" << endl;							
			bAcct1->Display();
			cout << endl;
			bAcct1->WithdrawlFunds(2000.00);
			cout << "Withdrawl of $2,000.00." << endl;
			bAcct1->Display();
			delete bAcct1;													//cleanup
	
		}

		if (answer == 's' || answer == 'S')

		{
			bAcct1 = new SavingsAccount(.01, 10000, 30303030);			//create Savings Account and run through requested steps
			cout << "Staring:" << endl;
			bAcct1->Display();
			cout << endl;
			bAcct1->AssessInterest();
			cout << "Accumulate Interest:" << endl;
			bAcct1->Display();
			cout << endl;
			bAcct1->WithdrawlFunds(1000.00);
			cout << "Withdrawl of $1,000.00" << endl;
			bAcct1->Display();
			delete bAcct1;												//clean up
			
		}
		if (answer == 'n' || answer == 'N')
		{
			break;														//Lazy way but effective
		}
		else
		{
			break;														//Failsafe
		}
	}

}
