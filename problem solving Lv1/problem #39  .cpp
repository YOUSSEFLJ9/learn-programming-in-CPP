using namespace std;
#include <iostream>

int main()
{
	int totBill, cashBill;
	cout << "please enter the total Bill in MAD : \n";
	cin >> totBill;
	cout << "please enter the cash Bill in MAD : \n ";
	cin >> cashBill;
	int c = cashBill - totBill;
	cout << "the rest is : " << c << " MAD";
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
float caclutremainderpaid(float totalbill, float cashpaid)
{

	return cashpaid - totalbill;
}

int mian()
{
	
	float totalbill = readpositivenumber("Pease Eneter The Total Bill :");
	float CashPaid= readpositivenumber("Pease Eneter The Cash Paid :");
	cout << endl;
	cout << "TOTAL BILL = " << totalbill << endl;
	cout << "TOTAL CHSH PAID = " << CashPaid << endl;
	cout << "***************************************\n";
	cout << "the remainder Paid is : " << caclutremainderpaid(totalbill, CashPaid)<<endl;
	return 0;

}