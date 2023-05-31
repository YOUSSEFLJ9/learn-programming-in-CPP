#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
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
enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}
int RandemNumber(int from, int to)
{
	int rundemnum = rand() % (to - from + 1) + from;

	return rundemnum;
}
void fillthearry(int arry[100], int& arryLength)
{
	for (int i = 0; i < arryLength; i++)
	{
		arry[i ] = RandemNumber(1, 100);

	}
}
void copyonlyprimrnumbers (int arrysource[100], int& arryLength, int arrydestination[100],int& arry2Length)
{
	int counter = 0;

	for (int i = 0; i < arryLength; i++)
	{
		if (CheckPrime(arrysource[i])==enPrimNotPrime::Prime)
			{
			arrydestination[counter] = arrysource[i];
			counter++;
			}
		
	}
	arry2Length = --counter;
}
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 0; i < arrylength; i++)
	{
		cout << arry[i] << " ";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int  arry[100], arrylength,arry2[100], arry2Length;
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array 1 element is : \n";
	printthearry(arry, arrylength);
	copyonlyprimrnumbers(arry, arrylength, arry2, arry2Length);
	cout << "\narray 2 element after copy : \n";
	printthearry(arry2, arry2Length);
	cout << endl<<endl;
	return 0;
}