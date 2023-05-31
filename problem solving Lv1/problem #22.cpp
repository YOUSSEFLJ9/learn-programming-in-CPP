using namespace std;
#include <iostream>

int main()
{
	int a;
	int b;
	cout << "please enter a\t\n ";
	cin >> a;
	cout << "please enter b\t\n";
	cin >> b;
	const float PI = 3.14;
	const short int Q= 4 , k = 2;
	float area;
	area = (PI * ( ( b * b) / Q)) * (k * a - b / k * a + b);
	cout << "the area of the circle is : " << area;


	
	return 0;

}
 

update 


using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	double a, b,area;
	 float const PI=3.14;
	 cout << "please enter the value of A :";
	 cin >> a;
	 cout << "please enter the valuse of B :";
	 cin >> b;
	 area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	 cout << "the area of the circule is : " << floor(area);
	

	return 0;
}


update 

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area1( float a, float b)
{
	 double area;
	 float const PI = 3.14;
	
	 area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	 return area;

}
int main()
{ 
	float a,b;
	cout << "please enter the value of A :";
	cin >> a;
	cout << "please enter the valuse of B :";
	cin >> b;
	
	cout << "the area of the circule is : " << area1(a,b);
	
	return 0;
	


}
