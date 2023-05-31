#pragma once

#include <iostream>
using namespace std;
namespace Lib1
{
	void function()
	{
		cout << "im ther best on one\n";
	}

	int sum(int A, int B)
	{
		return A + B;
	}

};
namespace Input
{
	int ReadNumber(string Message)
	{
		int Number;
		cout << Message;
		cin >> Number;
		return Number;
	}
	int ReadNumberRange(int From, int To)
	{
		int Number;
		do {
			cin >> Number;

		} while (From > Number || To < Number);

		return Number;
	}
	
}
