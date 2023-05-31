#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main()
{
	int PIN;
	int TPIN = 1234, cont = 0;
	cout << "please enter youer PIN : \n";
	cin >> PIN;
	while (PIN != TPIN && cont !=2)
	{
		cont = cont + 1;
		cout << "wrong PIN you still have " << 3 - cont << " times to try\n";
		cin >> PIN;
	}
	if (PIN == TPIN)
	{
		cout << "\n**********************************************************\n";
		cout << " your balance is 3000\n" ;
		cout << "\n**********************************************************\n" << endl << endl;
	}
	else
	{
		cout << "\n**********************************************************\n";
		cout << "you've entered the PIN 3 worng time, try again latter\n" ;
		cout << "\n**********************************************************\n" << endl << endl;

	}
}





