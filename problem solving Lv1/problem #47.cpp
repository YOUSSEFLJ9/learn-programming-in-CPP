using namespace std;
#include <iostream>

int main()
{
	int loanAmount, MonthlyPayment;
	cout << " please enter your loan Amount :";
	cin >> loanAmount;
	cout << "please enter your Monthly payment : ";
	cin >> MonthlyPayment;
	int timetosettle = loanAmount / MonthlyPayment;
	cout << "your time to rest the Amount is : " <<timetosettle << " months.";
	return 0;
}
