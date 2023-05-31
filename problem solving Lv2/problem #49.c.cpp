#include <iostream>
using namespace std;
float GetFractionPart(float Number)
{
	return Number - int(Number);
}

float MyCeil(float Number)
{
	float fraction = GetFractionPart(Number);
	if (Number >= 0)
	{
		if (fraction != 0)
			return int(Number) + 1;
		else
			return Number;
	}
	else if(Number < 0)
	{
		
		{
			return int(Number);
		}
		
	}
}
float ReadNumber()
{
	float Number;
	cout << "Please enter a number?";
	cin >> Number;
	return Number;
}
int main()
{
	float Number = ReadNumber();
	cout << "My MyFloor Result : " << MyCeil(Number) << endl;
	cout << "C++ floor Result : " << ceil(Number) << endl;
	return 0;
}