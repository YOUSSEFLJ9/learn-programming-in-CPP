


#include <iostream>
#include <string>
using namespace std;
enum EnPerfectOrNotPerfect{Perfect =1, NotPerfect=2};
int ReadPositiveNumber(string Message)
{
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
		return Number;
	} while (Number <= 0);
}
int SameModNumFrom1toNUM(int Number)
{
	int Sum = 0;
	for (int Counter= 1; Counter <Number; Counter++)
	{ 
		if (Number % Counter == 0)
		{
			Sum =Sum+ Counter;
		}
	}
	return Sum;
}
EnPerfectOrNotPerfect CheckPerfectOrNot(int Number)
{
	if (SameModNumFrom1toNUM(Number) == Number)
		return EnPerfectOrNotPerfect::Perfect;
	else
		return EnPerfectOrNotPerfect::NotPerfect;
}
string PrintResult(int Number)
{
	switch (CheckPerfectOrNot(Number))
	{
	case EnPerfectOrNotPerfect::Perfect:
		return " is Perfect\n";
	case EnPerfectOrNotPerfect::NotPerfect:
		return " is Not perfect\n";
	}
}
int main()
{
	int Number = ReadPositiveNumber("Please Eneter a Positive Number");
	cout << endl << Number << PrintResult(Number) << endl;
	
}











#include <iostream>
#include <string>
using namespace std;
enum EnPerfectOrNotPerfect{Perfect =1, NotPerfect=2};
int ReadPositiveNumber(string Message)
{
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
		return Number;
	} while (Number <= 0);
}
bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	for (int Counter= 1; Counter <Number; Counter++)
	{ 
		if (Number % Counter == 0)
		{
			Sum += Counter;
		}
	}
	return Number ==Sum;
}

void PrintResult(int Number)
{
	if (IsPerfectNumber(Number))
		cout <<Number << " is Perfect Number\n";
	else
		cout << Number << " is NOT Perfect Number\n";
}
int main()
{
	PrintResult( ReadPositiveNumber("Please Eneter a Positive Number"));
}