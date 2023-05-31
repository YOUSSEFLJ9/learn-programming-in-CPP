#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N; 
	cout << "plese enter N number :";
	cin >> N;
	
	for (N; N >=1;N=N-1)
	{
		cout << N << endl;
	}
}

update
:

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

	int N;
	cout << "plese enter N number :";
	cin >> N;

	while (1<= N)
	{
		cout <<N << endl;
		N--;
	}
}


