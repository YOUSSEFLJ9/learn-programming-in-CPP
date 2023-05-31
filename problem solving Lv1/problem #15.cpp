
int main()
{
	int a, b, area;
	cout << "please enter a and b:" <<endl;
	cin >> a >> b;
	area = a * b;
	cout << area <<endl;
	
	return 0;

}
update 

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int area(int a, int b)
{
	return a * b;

}
int main()
{
	int a, b;
	cout << "please enter A : ";
	cin >> a;
	cout << " please enter B :";
	cin >> b;
	cout << area(a, b);


}
