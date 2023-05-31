using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	int number, N,;
	cout << "please enter number :";
	cin >> number;
	cout << "please enter N : ";
	cin >> N;
	cout << "the power is : "<<round(pow(number,N));


	return 0;
}

updATE 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int power(int number,int N)
 {
	return (pow(number, N));
	 
	 }
 
int main()
{ 
	int number, N;
	cout << "please enter number :";
	cin >> number;
	cout << "please enter N : ";
	cin >> N;
	cout <<power(number,N);
	return 0;

}

anther method :


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N,M;
	cout << "plese enter number N ";
	cin >> N;
	cout << " plese enter number m : ";
	cin >> M;
	
	if (M == 0)
	{
		cout << 1;
	}
	else
	{
		int conter=0, sum=1;
		for (conter; conter <= M; conter = conter + 1)
		{
			sum = N * sum;
			cout << conter << "\t" << sum<<endl;
		}


	}
}; 


last update 

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int N,M,sum=1;
	cout << "please enter the Number N : \n";
	cin >> N;
	cout << "please enter the Number M : \n";
	cin >> M;
	if (M == 0)
	{
		cout << "your result is :  \a" << 1 << endl;
	}
	else
	{
		for (int C = 1; C <= M; C = C + 1)
		{
			sum = sum * N;
			cout << "your result is   : " << sum << endl;
		}
	}
};

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
	cout << "plese enter N  :";
	cin >> N;
	int c;
	cout << "plese enter  number :";
	cin >> c;
	sum = 1;
	while (c==0)
	{
		sum = 1;
	}
	while (c >= 1)
	{
		sum = N * sum;
		c--;
	}
	cout << sum << endl;

}



