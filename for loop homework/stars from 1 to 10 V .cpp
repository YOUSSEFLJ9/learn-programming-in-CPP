#include <iostream>
#include <cmath>
#include <string >
using namespace std;
int main()
{
	for (int A = 10; A >= 1; A--)
	{
		for (int B = 10; B >= A; B--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n";


	for (int C = 1; C <= 10; C++)
	{
		for (int Q = 1; Q <= C; Q++)
		{
			cout << "*";
		}
		cout << endl;
	}
}