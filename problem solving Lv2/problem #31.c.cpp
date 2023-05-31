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
		arry[i] = i + 1;

	}
}
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 0; i < arrylength; i++)
	{
		cout << arry[i] << " ";
	}
}
void Swap(int& A, int& B)
{
	int Temp;
	Temp = A; 
	A = B;
	B = Temp;
}
void shufflearry(int arry[100], int& arrylength)
{
	for (int i = 0; i < arrylength; i++)
	{
		Swap(arry[RandemNumber(1, arrylength) - 1], arry[RandemNumber(1, arrylength) - 1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int  arry[100], arrylength;
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array before shuffle is  : \n";
	printthearry(arry, arrylength);
	cout << "\nthe Randem Array After shuffle is  : \n";
	shufflearry(arry, arrylength);
	printthearry(arry, arrylength);
	return 0;
}