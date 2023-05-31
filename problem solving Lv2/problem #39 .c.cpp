#include <iostream>
using namespace std;
enum enPrimeornotPrime { prime = 1, notprime = 2 };
enPrimeornotPrime chekprimenum(int  Num)
{
	int M = round(Num / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Num % Counter == 0)
			return enPrimeornotPrime::notprime;
	}
	return enPrimeornotPrime::prime;
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
void CopyPrimeNumbersArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (chekprimenum(arrSource[i]) == enPrimeornotPrime::prime)
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
	}
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arr2Length = 0;
	FillArrayWithRandomNumbers(arr, arrLength);
	int arr2[100];
	CopyPrimeNumbersArray(arr, arr2, arrLength,arr2Length);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);
	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arr2Length);
	return 0;
}
