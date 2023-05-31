#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cout << "plese enter number N ";
	cin >> N;
	if (N > 0)
	{
		int  sum = 1;
		int conter;
		for ( conter= N ; conter >= 1;conter=conter- 1)
		{
			sum = sum *conter;
			cout << sum<<endl;



		}
	}
	else
	{
		cout << "rejected";
	}
};





update 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	int N,sum=1;
	cout << "please enter the Number N : \n";
	cin >> N;
	cout << "*********************************\n\n";
	if (N <= 0)
	{
		for (N<=0;N<=0;N)
		{
			cout << "NUMBER IVALID (please enter numb begger than 0 ):\n";
			cin >> N;
			cout << "*********************************\n\n";

		}
	}
	for (N; N >= 1; N = N - 1)
	{
		sum = sum * N;
		cout << sum << endl;
	}
	

};
update :
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

	int N, sum;
	cout << "plese enter N number :";
	cin >> N;
	while (N<=0)
	{
		cout << "wrong input \n please enter again :\n";
		cin >> N;
	}
	sum = 1;
	int c = 1;
	while (1 <= N)
	{
		sum = sum * N;
		N--;
	}
	cout << sum << endl;

}







