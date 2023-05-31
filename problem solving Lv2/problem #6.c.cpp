#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string Message)
{
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
		return Number;
	} while (Number <= 0);
}
int sumdigits(int Number)
{
	int reminder,sum=0;
	while (Number > 0)
	{
		reminder = Number % 10;
		Number = Number / 10;
		sum += reminder;
	}
	return sum
		;
}
int main()
{
	cout <<"the sum Of Digits : "<<sumdigits(ReadNumber("please enter a positive number :"));
}