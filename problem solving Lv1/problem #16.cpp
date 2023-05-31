









#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double  r, a, b;
	cout << "please enter a :" << endl;
	cin >> a;
	cout << "please enter b :" << endl;
	cin >> b;
	r = a * (sqrt(pow(b, 2) - pow(a, 2)));
	cout << "the area of the rectagle is : " << r;


	return 0;
}
https://en.cppreference.com/w/cpp/hrader/cmath

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int area(double A,double B)
{
	double area1;
	area1 = A * (sqrt(pow(B, 2) - pow(A, 2)));
	return area1;


}
int main()
{ 
	double A, B;
	cout << "please enter A :";
	cin >> A;
	cout << "please enter B :";
	cin >> B;
	cout << area(A, B);

	


}


