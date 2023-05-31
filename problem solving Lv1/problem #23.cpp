using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	float a, b, c, P, area;
	const float PI = 3.14;
	cout << "please enter a :";
	cin >> a;
	cout << "please enter b :";
	cin >> b;
	cout << "please enter c :";
	cin >> c;
	P = (a + b + c) / 2;
	float T;
	T = ((a * b * c) /( 4 * sqrt(P * (P - a) * (P - b) * (P - c))));
	area = PI * pow(T, 2);
	cout << "Circle Area circle Described Around an Arbitrary Triangle is : "<<round(area);

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
 /*void mai()
 {
	 float a, b, c;
	 cout << "please enter a :  ";
	 cin >> a;
	 cout << "please enter b :  ";
	 cin >> b;
	 cout << "please enter c :  ";
	 cin >> c;

	 cout << area1(a, b, c);
	 }*/
 
int main()
{ 
	float a,b,c,d;
	cout << "please enter a :  ";
	cin >> a;
	cout << "please enter b :  ";
	cin >> b;
	cout << "please enter c :  ";
	cin >> c;
	
	cout << area1(a, b, c) << endl;
	


	
	return 0;

}

