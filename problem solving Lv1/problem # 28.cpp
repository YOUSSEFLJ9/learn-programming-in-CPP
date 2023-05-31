#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cout << "plese enter number N ";
	cin >> N;
	int contre = 0, sum = 0;
	for (contre = 1;contre <= N; contre = contre + 2)
	{
		sum = contre + sum;
		cout << contre << "  and the sum is :   "<<sum <<endl;
	}
	
};


update   

  
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	int N,m;
	cout << "please enter the Number N : \n";
	cin >> N;
	int  sum=0;
	for (int C=1 ; N >=C; C++)
	{
		if (C % 2 != 0)
		{
			sum = sum + C;
			cout << C <<" and the sane is : "<<sum << endl;
		}
		
		

	}
