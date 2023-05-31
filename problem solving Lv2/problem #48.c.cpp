#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
float readNum()
{
	float Number;
	cout << "please enter a Number\n";
	cin >> Number;
	return Number;
	

}
float GetFractionPart(float Number)
{
	return Number - int(Number);
}
float myfloor(float Number) {
	float N = GetFractionPart(Number);
	if (N > 0)
		return int(Number);
	else if (N < 0)
		return int (Number) - 1;
}
int main()
{
	for (int i = 0; i <= 10; i++)
	{
		float Number = readNum();

		cout << "My floor is : " << myfloor(Number) << endl;
		cout << "the C++ function floor : " << floor(Number) << endl;
	}

}