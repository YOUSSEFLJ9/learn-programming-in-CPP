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
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (IsPerfectNumber(Counter))
			cout << Counter << " is Perfect Number\n";
	}
}
int main()
{
	PrintResult( ReadPositiveNumber("Please Eneter a Positive Number"));
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
void PrintPerfectNumberFrom1ToN(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}
int main()
{
	PrintPerfectNumberFrom1ToN( ReadPositiveNumber("Please Eneter a Positive Number"));
}