#include <iostream>
#include <cmath>
using namespace std;
float GetFractionPart(float Number)
{
	return Number - int(Number);
}

double Mysqrt(float Number) {
	// Initialize the approximation to the square root of x
	double approx = Number;

	// Use the Newton-Raphson method to find a better approximation
	for (int i = 0; i < 10; i++) {
		approx = (approx + Number / approx) / 2;
	}

	// Return the final approximation
	return approx;
}
double MYSQRT(float Number)
{
	return pow(Number, 0.5);
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
	cout << "My sqrt Result : " << Mysqrt(Number) << endl;
	cout << "SOLOTION OF THE FORMATEUR :" << MYSQRT(Number ) << endl;
	cout << "C++ sqrt Result : " << sqrt(Number) << endl;
	return 0;
}