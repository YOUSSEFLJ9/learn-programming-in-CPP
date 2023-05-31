using namespace std;
#include <iostream>

int main()
{
	int D;
	cout << "please enter D ";
	cin >> D;
	const float PI = 3.14;
	const short int Q= 4;
	float area = (PI * D * D) / Q;
	cout << "the area of the circle is : " << area;


	
	return 0;

}

update 





#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int D;
	cout << "please enter D ";
	cin >> D;
	const float PI = 3.14;
	float area = PI *pow(D,2) / 4 ;
	cout << "the area of the circle is : " << ceil(area);





	return 0;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 float area( float D)
{
	 const float PI = 3.14;
	 float area = PI * pow(D, 2) / 4;
	 return area;


}
int main()
{ 
	float D;
	cout << "please enter D :";
	cin >> D;
	
	cout << "the area of the circle is : " <<  area(D);
	
	return 0;
	


}

