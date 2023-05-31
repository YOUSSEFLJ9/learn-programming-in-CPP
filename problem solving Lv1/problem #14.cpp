using namespace std;
#include <iostream>

int main()
{
	int a, b, swap;
	cout << "please enter number a" <<endl;
	cin >> a;
	cout << "please enter number b\n";
	cin >> b;
	cout << a <<endl;
	cout << b << endl;
	swap = a;
	a = b;
	b = swap;
	


	cout << a << endl;
	cout <<b << endl;
	return 0;

}

update

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void printname() {
	int num1, num2;
	cout << "please enter num1 : ";
	cin >> num1;
	cout << "please enter num2 : ";
	cin >> num2;
	cout << num1 << endl;
	cout << num2 << endl;
	int swap;
	swap = num1;
	num1 = num2;
	num2 = swap;
	cout << num1 << endl;
	cout << num2 << endl;
	system("pause");

}
int main()
{

	printname();


}
