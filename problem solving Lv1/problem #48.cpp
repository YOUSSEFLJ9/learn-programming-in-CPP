
using namespace std;
#include <iostream>

int main()
{
	int loanAmount, howMonthlyPayment;
	cout << " please enter your loan Amount :";
	cin >> loanAmount;
	cout << "please enter your how Month you need for Payment : ";
	cin >> howMonthlyPayment;
	int monthlyinstallmentamount = loanAmount / howMonthlyPayment;
	cout << "your time to rest the Amount is : " << monthlyinstallmentamount << " in month.";
	return 0;
}

