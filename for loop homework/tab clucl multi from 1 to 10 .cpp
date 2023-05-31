#include <iostream>
#include <cmath>
#include <string >
using namespace std;
int main()
{

	for (int A = 1; A <= 10; A++)
	{
		cout << "i = " << A << endl;
		for (int B = 1; B <= 10; B++)
		{

			cout << A << " * " << B << " = " << A * B << endl;
		}
		cout << "***********************\n\n";
	}

}