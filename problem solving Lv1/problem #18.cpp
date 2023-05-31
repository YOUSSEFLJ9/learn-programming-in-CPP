#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float const Pi = 3.14;
	float r,area;
	cout << "please enter R :\n";
	cin >> r;
	area = Pi * pow(r, 2);
	cout << "the area of the circul is : " <<ceil( area);




	return 0;
}

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area( float R)
{
	float area1;
	const float Pi = 3.14;
	area1 = Pi*pow(R,2);
	return area1;


}
int main()
{ 
	float R;
	cout << "please enter R :";
	cin >> R;
	
	cout << area(R);
	system("pause");
	cout << area(R);
	return 0;
	


}

