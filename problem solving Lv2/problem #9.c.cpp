#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return 	FreqCount;

}
void printDigit(int Number)
{

	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short DigitToCheck = 0;
		DigitToCheck = CountDigitFrequency(i, Number);
		if (DigitToCheck > 0)
		{
			cout << "Digit " << i << " frequency is " << DigitToCheck << " time (s).\n";
		}


	}
}
int main()
{
	printDigit(ReadPositiveNumber("please enter a Positive number "));

	}