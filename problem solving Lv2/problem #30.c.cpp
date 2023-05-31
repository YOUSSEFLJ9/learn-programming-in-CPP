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
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 0; i < arrylength; i++)
	{
		cout << arry[i] << " ";
	}
}
void sumofarrys(int arry[100], int arry2[100], int arrylength,int arrysum[100])
{
	for (int i = 0; i < arrylength; i++)
	{
		arrysum[i] = arry[i] + arry2[i];
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int  arry[100], arrylength,arry2[100], arrysum[100];
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array 1 element is : \n";
	printthearry(arry, arrylength);
	fillthearry(arry2, arrylength);
	cout << "\narray 2 element after copy : \n";
	printthearry(arry2, arrylength);
	cout << "\narray  element after sum  : \n";
	sumofarrys(arry, arry2, arrylength, arrysum);
	printthearry(arrysum, arrylength);
	cout << endl<<endl;
	return 0;
}