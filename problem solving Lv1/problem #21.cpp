using namespace std;
#include <iostream>

int main()
{
	int A;
	cout << "please enter D ";
	cin >> A;
	const float PI = 3.14;
	const short int Q= 4;
	float area = (PI * A * A) / Q;
	cout << "the area of the circle is : " << area;


	
	return 0;
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	float l, area;
	const float PI = 3.14;
	cout << "please enter L value :";
	cin >> l;
	area = pow(l, 2) /(4 * PI) ;
	cout << "the area of the value entered is : " << ceil(area);
	return 0;
}
update



#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area1( float l)
{
	 float area;
	 const float PI = 3.14;
	
	 area = pow(l, 2) / (4 * PI);
	
	 return area;

}
int main()
{ 
	float l;
	cout << "please enter L value :";
	cin >> l;
	
	cout << "the area of the circle is : " <<  area1(l);
	
	return 0;
	


}

