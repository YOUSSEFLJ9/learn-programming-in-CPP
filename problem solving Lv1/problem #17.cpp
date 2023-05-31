using namespace std;
#include <iostream>

int main()
{
	float a, h, area;
	const float d =0.5;
	cout << "please enter a :";
	cin >> a;
	cout << "please enter high h :";
	
	cin >> h;
	area = a*d * h;
	cout << d << endl;
	cout << "the area of th tringle is : "<<area;
	
	return 0;

}
