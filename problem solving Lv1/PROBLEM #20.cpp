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
update
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	float A;
	cout << "please enter A ";
	cin >> A;
	const float PI = 3.14;
	float area = PI * pow(A / 2, 2);
	cout << "the area of the circle is : " <<ceil( area);

	return 0;
}
update 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area( float A)
{
	
	 const float PI = 3.14;
	 float area = PI * pow(A / 2, 2);
	
	 return area;


}
int main()
{ 
	float A;
	cout << "please enter A :";
	cin >> A;
	
	cout << "the area of the circle is : " <<  area(A);
	
	return 0;
	


}


