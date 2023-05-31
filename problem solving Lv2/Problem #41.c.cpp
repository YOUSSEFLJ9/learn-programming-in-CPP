#include <iostream>
#include <string>
using namespace std;
void ReadArray(int arrSource[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	cout << "\nEnter array elements: \n";

	for (int i = 0; i < arrLength; i++)
	{
		cout << "please enter Element [" << i + 1 << "] : ";
		cin >> arrSource[i];
	}
	cout << endl;
}
bool IsPalindromearry(int arrSource[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arrSource[i] != arrSource[arrLength - i - 1])
		{
			return false;
		}
		return true;
	}

}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int main()
{
	int arrSource[100], arrLength = 0;
	ReadArray(arrSource, arrLength);
	cout << "element of Array :\n";
	cout << "\n*************************************\n";
	PrintArray(arrSource, arrLength);
	cout << "*************************************\n";
	if (IsPalindromearry( arrSource,  arrLength))
	{
		cout << "\nYes Array is Palindrome.\n";
	}
	else { cout << "\nNo the Array is not a Palindrome.\n"; }
	return 0;
}