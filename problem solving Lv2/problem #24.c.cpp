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
int RandemNumber(int from, int to)
{
	int rundemnum = rand() % (to - from + 1) + from;

	return rundemnum;
}
void fillthearry(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i ] = RandemNumber(1, 100);

	}
}
int Maxnumber(int arr[100], int& arrLength)
{
	int maxNum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > maxNum)
		{
			maxNum = arr[i];
		}
	}
	return maxNum;
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
	int  arry[100], arrylength;
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array is : ";
	printthearry(arry, arrylength);
	cout << "\n\nThe max Number is : " << Maxnumber(arry, arrylength) << endl;
	
	return 0;
}