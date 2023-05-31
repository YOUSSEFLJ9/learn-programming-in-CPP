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
		arry[i] = RandemNumber(1, 100);
	}
}
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 0; i < arrylength; i++)
	{
		cout << arry[i] << " ";
	}
}
void copyarry(int arry[100], int& arryLength, int arry2[100])
{
	for (int i = 0; i < arryLength; i++)
	{
		arry2[i] = arry[arryLength - 1 - i];

	}

}

int main()
{
	srand((unsigned)time(NULL));

	int  arry[100], arrylength,arry2[100];
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array before is  : \n";
	printthearry(arry, arrylength);
	cout << "\nthe Randem Array after is  : \n";
	copyarry(arry, arrylength, arry2);
	
	printthearry(arry2, arrylength);
	return 0;
}