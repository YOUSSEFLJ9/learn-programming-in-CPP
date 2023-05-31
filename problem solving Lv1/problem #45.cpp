#include <iostream>
#include <cmath>
using namespace std;
enum yearmonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };
int main()
{
	int month;
	cout << "please enter the number of the month :\n";
	cin >> month;
	yearmonths months;
	months = (yearmonths)month;
	switch (months)
	{
	case  yearmonths::January:

		cout << "it's January";
		break;
	case yearmonths::February:

		cout << "it's February";
		break;
	case yearmonths::March:

		cout << "it's March";
		break;
	case yearmonths::April:

		cout << "it's April";
		break;
	case yearmonths::May:

		cout << "it's May";
		break;
	case yearmonths::June:
		cout << "it's June";
		break;
	case yearmonths::July:
		cout << "it's July";
		break;
	case yearmonths::August:
		cout << "it's August";
		break;
	case yearmonths::September:
		cout << "it's September";
		break;
	case yearmonths::October:
		cout << "it's October";
		break;
	case yearmonths::November:
		cout << "it's November";
		break;
	case yearmonths::December:
		cout << "it's December";
		break;
	default:
		cout << "that's not a month.";
		break;
	}




	return 0;
};
