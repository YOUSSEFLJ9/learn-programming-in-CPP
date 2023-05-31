#include <iostream>
using namespace std;

int ReadNumber(string message)
{
		int Number;
		do {
		cout << message << "\n";
		cin >> Number;
		} while (Number != 0 && Number != 1);
	return Number;
}
int fillarry (int  arry[100])
{
	int i = 1;
	int Arrylength = 0;
	do
	{
		
		cout << "please enter a Number : " << endl;
		cin >>arry[Arrylength];
	
		i = ReadNumber("Do you want to add more Numbers ? Yes 1 No 0");
		Arrylength++;
	} while (i == 1);
	return Arrylength;
}
void printarry(int  & Arrylength, int arry[100])
{
	for (int j = 0; j < Arrylength; j++)
	{
		cout << arry[j] << " ";
	}
}

int main()
{
	int Arrylength, arry[100];
	Arrylength= fillarry(  arry);
	cout << "Array Lengths: "<< Arrylength <<endl;
	cout << "arry element : ";
	printarry( Arrylength, arry);
	return 0;
}

update 




#include <iostream>
using namespace std;

int ReadNumber()
{
		int Number;
		cout <<  "\nPlease enter a number? \n";
		cin >> Number;
	return Number;
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}
void fillarry (int  arr[100], int & arrLength)
{
	bool Addmore = true;
	do
	{
		AddArrayElement(ReadNumber(), arr, arrLength);
		cout <<"Do you want to add more Numbers ? Yes 1 No 0\n";
		cin >> Addmore;

	} while (Addmore);
	
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int Arrylength=0, arry[100];
  fillarry(  arry, Arrylength);
	cout << "Array Lengths: "<< Arrylength <<endl;
	cout << "arry element : ";
	PrintArray( arry, Arrylength);
	return 0;
}