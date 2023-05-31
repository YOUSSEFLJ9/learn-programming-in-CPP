#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int day;
	cout << "please enter a number of a day : \n";
	cin >> day;
	if (day <= 7)
	{
		if (day ==1)
		{
			cout << "it's sunday\n";
		}
		else if (day == 2)
		{
			cout << "it's Monday\n";

		}
		else if (day == 3)
		{
			cout << "it's tuesday\n";

		}
		else if (day == 4)
		{
			cout << "it's wednsday\n";


		}
		else if (day == 5)
		{
			cout << "it's thursday\n";

		}
		else if (day == 6)
		{
			cout << "it's friday\n";

		}
		else if (day == 7)
		{
			cout << "it's saturday\n";

		}
		else
		{
			cout << "wrong input\n";

		}
	}
	else
	{
		cout << "wrong input\n";

	}

	
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

enum weekdays{sunday=1,monday=2 ,tuesday=3,wednsday=4,thursday=5, friday=6 , saturday=7};

int main()
{
	int day;
	cout << "please enter a number of a day : \n";
	cin >> day;
	weekdays days;
	days = (weekdays)day;
	switch (days)
	{
	case weekdays::sunday:
		
			cout << "it's sunday\n";
			break;
	case 2:

			cout << "it's Monday\n";
			break;
	case weekdays::tuesday:
		
			cout << "it's tuesday\n";

			break;
	case weekdays::wednsday:

			cout << "it's wednsday\n";
			break;
	case weekdays::thursday:
			cout << "it's thursday\n";
			break;
	case weekdays::friday:
			cout << "it's friday\n";
			break;
	case weekdays::saturday:
			cout << "it's saturday\n";
			break;
	default:
			cout << "wrong input\n";
			break;

	}


	return 0;
}



