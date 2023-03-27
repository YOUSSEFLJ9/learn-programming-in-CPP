#include <iostream>
#include <vector>
using namespace std;
struct StEmployee {
	string FirstName="";
	string LastName="";
	int Sallary=0;
};
void ReadEmpolyee(vector  <StEmployee> & VStemployee)
{
	
	StEmployee tempEmployee;

	char moreEmployee = 'y';

	do
	{
		cout << "FirstName : ";
		cin >> tempEmployee.FirstName;
		cout << "Last Name : ";
		cin >> tempEmployee.LastName;
		cout << "Month Sallary :";
		cin >> tempEmployee.Sallary;

		VStemployee.push_back(tempEmployee);
		cout << "\n\n************************************";
		cout << "\ndo you want to add more emplyee?(y/n)\n";
		cin >> moreEmployee;

	} while (moreEmployee == 'y' || moreEmployee == 'Y');
}
void Printempolyee(vector  <StEmployee> &VStemployee)
{
	
		
		cout << "the list of emplyeee is :\n\n";
		int A = 1;
		for (StEmployee& Emoplyaes : VStemployee)
		{

			cout << "*****************{" << A << "}***********************\n";

			cout << "FirstName : " << Emoplyaes.FirstName << endl;
			cout << "Last Name : " << Emoplyaes.LastName << endl;
			cout << "Month Sallary :" << Emoplyaes.Sallary << endl;
			cout << "\n\n";
			A++;
		}
	
}
int main()
{
	vector  <StEmployee> VStemployee;
	//ReadEmpolyee(VStemployee);
	//Printempolyee(VStemployee);
	int A, B, C;
	cout << "please enter Number A :";
	cin >> A;
	cout << "please enter Number B :";
	cin >> B;
	cout << "please enter Number C :";
	cin >> C;
	if (A > B)
	{
		int swap = 0;
		 swap= A ;
		A = B;
		B = swap;

	}
	if (B>C)
	{
		int swap = 0;
		swap = B;
		B = C;
		C = swap;
	}
	if (A > B)
	{
		int swap = 0;
		swap = A;
		A = B;
		B = swap;

	}



	cout << "the order of Numers is : \n";
	cout <<" " << A << "\n " << B << "\n " << C << "\n\n";
	
	
}