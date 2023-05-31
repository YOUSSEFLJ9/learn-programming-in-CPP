#include <iostream>
#include <string>
using namespace std;

string ReadNumber(string Message)
{
	int Number;
	string Num;
	
		cout << Message << endl;
		cin >> Number;
		
		 Num = to_string(Number);
		
	
		 return Num;
}
int ReturnLength(string Num)
{
	int LengthNum = Num.length();
	return LengthNum;
}
void PrintNumFromrightinVer(string Num)
{
	int L = ReturnLength(Num);
	for (L; L >= 0; L--)
	{
		cout << Num[L] << endl;
	}
}
int main()
{
	PrintNumFromrightinVer(ReadNumber("please enter a number :"));
	return 0;
}


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
void Printdigits(int Number)
{
	int reminder;
	while (Number > 0)
	{
		reminder = Number % 10;
		Number = Number / 10;
		cout << reminder << endl;
	}
}
int main()
{
	Printdigits(ReadNumber("please enter a positive number :"));
}
