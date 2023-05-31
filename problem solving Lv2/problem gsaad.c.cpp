#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int main()
{
	srand((unsigned)time(NULL));

	int i =RandomNumber(1, 30);
	if (i >= 1 && i <= 10)
	{
		cout << "dwi m3aha lyoum\n"<<i;
}
	else if (i > 10 && i <= 20)
	{
		cout << "mazal \n";
	}
	else if (i > 20 && i <= 30) {
		cout << "variabl cte\n";
	}
}