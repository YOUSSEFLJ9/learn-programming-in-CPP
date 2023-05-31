using namespace std;
#include <iostream>

int main()
{
	float Billvalue, tbv, TOTB;
	cout << " please enter the Bille value : \n";

	cin >> Billvalue;
	tbv = Billvalue * 1.1;
	TOTB = tbv * 1.16;
	cout << "the totale bill is : " << TOTB << " .";
	return 0;
}



#include <iostream>
#include <cmath>
#include<string>
using namespace std;
float readpositivenumber(string message)
{

	float Number; 
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
float caclutservicefee(float BillValue)
{
	int Billwithfee;
	Billwithfee= BillValue * (1 + 0.1);
	return Billwithfee * 1.16;
}

int main()
{
	float totalbill = readpositivenumber("please enter the Bill Value :");
	cout << endl;
	cout << "*************\n";
	cout << "the total Bill = " << totalbill<<endl;
	cout << "*************\n";
	cout <<"the total bill after service fee and sales Tax = "<< caclutservicefee(totalbill)<<endl<<endl<<endl;
	return 0;
}