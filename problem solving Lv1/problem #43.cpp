using namespace std;
#include <iostream>

int main()
{
	int secperday, secperhour, secpermin;
	secperday = 60 * 60 * 24;
	secperhour = 60 * 60;
	secpermin = 60;
	int totsec;
	cout << "please enter the total of the seconds : \n";
	cin >> totsec;
	int numofdays, numofhours, numofmin, numofsec, remainder;
	numofdays = (totsec / secperday);
	remainder = totsec % secperday;
	numofhours = (remainder / secperhour);
	remainder = remainder % secperhour;
	numofmin = (remainder / secpermin);
	remainder = remainder % secpermin;
	numofsec = remainder;
	cout << "the number of seconds entered equal:       = " << numofdays << ":" << numofhours << ":" << numofmin << ":" << numofsec;

	return 0;
}

or 
using namespace std;
#include <iostream>

int main()
{
	int secperday, secperhour, secpermin;
	secperday = 60 * 60 * 24;
	secperhour = 60 * 60;
	secpermin = 60;
	int totsec;
	cout << "please enter the total of the seconds : \n";
	cin >> totsec;
	int numofdays, numofhours, numofmin, numofsec, remainder;
	numofdays = floor(totsec / secperday);
	remainder = totsec % secperday;
	numofhours = floor(remainder / secperhour);
	remainder = remainder % secperhour;
	numofmin = floor(remainder / secpermin);
	remainder = remainder % secpermin;
	numofsec = remainder;
	cout << "the number of seconds entered equal:       = " << numofdays << ":" << numofhours << ":" << numofmin << ":" << numofsec;

	return 0;
}
