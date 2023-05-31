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
	for (int i = 1; i <= arrLength; i++)
	{
		arr[i - 1] = RandemNumber(10, 100);

	}
}
void printthearry(int arry[100], int& arrylength)
{

	for (int i = 1; i <= arrylength; i++)
	{
		cout << arry[i - 1]<<" ";
	}
	
}
/*int CountDigitFrequency(short DigitToCheck, int arrylength, int arry[100])
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
}*/
int main()
{
	srand((unsigned)time(NULL));
	int  arry[100], arrylength;
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");

	cout << "the Randem Array is : ";
	fillthearry(arry, arrylength);
	printthearry(arry, arrylength);



	/*cout << "\nNumber " << DigitToCheck;
	cout << " is repeated "; 
	cout << CountDigitFrequency(DigitToCheck, arrylength, arry) << " time(s)\n";*/
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
int RandemNumber(int from, int to)
{
	int rundemnum = rand() % (to - from + 1) + from;

	return rundemnum;
}
void fillthearry(int arr[100], int& arrLength)
{
	for (int i = 1; i <= arrLength; i++)
	{
		arr[i - 1] = RandemNumber(1, 100);

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
	int  arry[100], arrylength;
	arrylength = ReadPositiveNumber("Enter the length Number of the arry you want to check :");
	fillthearry(arry, arrylength);
	cout << "the Randem Array is : ";
	printthearry(arry, arrylength);
	
	return 0;
}