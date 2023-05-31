#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cout << "plese enter number N ";
	cin >> N;
	int contre = 0, sum = 0;
	for (contre = 0;contre <= N; contre = contre + 2)
	{
		sum = contre + sum;
		cout << contre << "  and the sum is :   "<<sum <<endl;
	}
	
};


update 

int main()
{

	int N,m;
	cout << "please enter the Number N : \n";
	cin >> N;
	int  sum=0;
	for (int C=1 ; N >=C; C++)
	{
		if (C % 2 == 0)
		{
			sum = sum + C;
			cout << C <<" and the sane is : "<<sum << endl;
		}


#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int readrange(int from, int to)
{
	int number;
	cout << "please enter a number between a " << from << "  to " << to <<": "<< endl;
	cin >> number;
	while (number <from || number >to)
	{
		cout << "wrong number \n";
		cout << "please enter again a number between " << from << " to " << to <<": " << endl;
		cin >> number;

	}
	return number; 

}
int main()
{

	int N,sum;
	cout << "plese enter N number :";
	cin >> N;
	sum = 0;
	int c = 0;
	while (c <= N)
	{
		sum = sum + c;
		c+=2;
	}
	cout << sum << endl;

}



