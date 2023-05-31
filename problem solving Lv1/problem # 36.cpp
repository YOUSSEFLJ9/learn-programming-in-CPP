#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	
	int num1, num2;
	string operationtype;
	string plus, moin, foi, devise;
	plus = "+", moin= "-",foi = "*", devise = "/";
	cout << "please enter number : \n";
	cin >> num1;
	cout << "please enter number : \n ";
	cin >> num2;
	cout << "please enter oeration taype '+' '-' '*' '/'\n";
	cin >> operationtype;
	if (operationtype == plus)
	{
		cout << num1 + num2<<endl;

	}
	else if (operationtype == moin)
	{
		cout << num1 - num2;
	}
	else if (operationtype == foi)
	{
		cout << num1 * num2;

	}
	else if (operationtype == devise)
	{
		cout << num1 / num2;

	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
enum typcalcu {plus = 1, minse = 2,multi = 3, division= 4 };

int main()
{
	int A, B;
	int operationmood;
	cout << "plese enter the first number : \n";
	cin >> A;
	cout << "please enter the second number : \n";
	cin >> B;
	cout << "plese choose what operation you want : 1 for (+) ,2 for (-) ,3 for (*) ,4 for (/) \n ";
	
	cin >> operationmood;
	typcalcu calcu;
	calcu = (typcalcu)operationmood;
	switch (calcu)
	{
	case typcalcu::plus :
		cout << A + B;
		break;
	case typcalcu::minse:
		cout << A - B;
		break;
	case typcalcu::multi:
		cout << A * B;
		break;
	case typcalcu::division:
		cout << A / B;
		break;
	default:
		cout << "unvide type of operation.\n";
		break;
	}

	return 0;
};


#include <iostream>
#include <cmath>
#include<string>
using namespace std;
enum enOperationtype { Add='+', Subtract = '-',Multiply = '*',Divide = '/' };
float readnumber(string message) {
	float Number = 0; 
	cout << message << endl;
	cin >> Number; 
	return Number;
}
enOperationtype Readoftype()
{

	char OT = '2';
	cout << "please enter operation type (+,-,*,/) ?\n";
	cin >> OT;
	return (enOperationtype)OT;

}
float calculate(float Number1, float Number2, enOperationtype entype)
{
	switch (entype)
	{
	case Add:
		return Number1 + Number2;
	case Subtract:
		return Number1 - Number2;
	case Multiply:
		return Number1 * Number2;
	case Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}

}
int main()
{
	float Number1 = readnumber("please enter the first Number");
	float Number2 = readnumber("please enter the second Number");
	enOperationtype entype = Readoftype();
	cout << "the result of your operation = " << calculate(Number1, Number2, entype);
}

