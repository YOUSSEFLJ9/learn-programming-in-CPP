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
void fillthearry(int arry[100], int& arryLength)
{
	for (int i = 0; i < arryLength; i++)
	{
		arry[i ] = RandemNumber(1, 100);

	}
}
void copytoarr2(int arry[100], int& arryLength,int arr2[100])
{
	for (int i = 0; i < arryLength; i++)
	{
		arr2[i] = arry[i];
	}
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
	int  arry[100], arrylength,arry2[100];
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array 1 element is : \n";
	printthearry(arry, arrylength);
	copytoarr2(arry, arrylength, arry2);
	cout << "\narray 2 element after copy : \n";
	printthearry(arry2, arrylength);
	cout << endl<<endl;
	return 0;
}