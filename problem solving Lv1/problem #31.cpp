
using namespace std;
#include <iostream>

int main()
{
	int n, a;
	int b;
	int c;
	cout << "please enter a\t\n ";
	cin >> n;
	a = n * n;
	b = n * n * n;
	c = n * n * n * n;
	cout << a << endl;
	cout <<b<< endl;
	cout << c << endl;

update :
 

using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	float A;
	cout << "please enter the number of A :";
	cin >> A;
	cout << "the number you entered is : " << A << endl;
	cout << "power 2 is : " << pow(A, 2) << endl;
	cout << "power of 3 is : " << pow(A, 3) << endl;
	cout << "power pof 4 is : " << pow(A, 4)<<endl ;

	return 0;
}

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area1( float a, float b, float c)
{
	 float  P, area,T;
	 const float PI = 3.14;
	 P = (a + b + c) / 2;
	 T = ((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))));
	 area = PI * pow(T, 2);
	 return area;


}
void power()
 {
	float A;
	cout << "please enter the number of A :";
	cin >> A;
	cout << "the number you entered is : " << A << endl;
	cout << "power 2 is : " << pow(A, 2) << endl;
	cout << "power of 3 is : " << pow(A, 3) << endl;
	cout << "power of 4 is : " << pow(A, 4) << endl;

	 }
 
int main()
{ 
	power();
	return 0;

}
