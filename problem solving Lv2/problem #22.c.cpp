#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int readthearry(int Nnumber)
{
	short arry[100];
	int allNumber = 0;
	for (int k = 1; k <= Nnumber; k++)
	{
		cout << "Element [" << k  << "] : ";
		cin >> arry[k-1];
	}
	for (int i = 1; i <= Nnumber; i++) 
	{
		allNumber=  arry[i-1]+allNumber*10;
	}
	return allNumber;
}
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}
int main()
{
	int nNumber = ReadPositiveNumber("Please enter the main number ? ");
	int allNumber = readthearry(nNumber);
	int DigitToCheck = ReadPositiveNumber("Enter the Number you want to check :");
	cout << "the Originale Array is : " << allNumber << endl;
	cout << DigitToCheck << " is repated " << CountDigitFrequency(DigitToCheck, allNumber) << " Time(s). ";
			


			return 0;
}







#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void readthearry(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";   
	cin >> arrLength; 
	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength; i++)
	{ 
		cout << "Element [" << i + 1 << "] : ";       
	cin >> arr[i];
	}    
	cout << endl;
	
	
}
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 1; i <= arrylength; i++)
	{
		cout << arry[i - 1]<<" ";
	}
	
}
int CountDigitFrequency(short DigitToCheck, int arrylength, int arry[100])
{
	int FreqCount = 0;
	for (int i = 1; i <= arrylength;i++)
	{
		if (DigitToCheck == arry[i-1])
		{
			FreqCount++;
		}
	}
	return FreqCount;
}
int main()
{
	int DigitToCheck, arry[100], arrylength;
	readthearry(arry, arrylength);
	DigitToCheck = ReadPositiveNumber("Enter the Number you want to check :");

	cout << "the Originale Array is : ";
	printthearry(arry, arrylength);

	cout << "\nNumber " << DigitToCheck; 
	cout << " is repeated "; 
	cout << CountDigitFrequency(DigitToCheck, arrylength, arry) << " time(s)\n";
	return 0;
}