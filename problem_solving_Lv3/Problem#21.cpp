#include <iostream>
#include <string>
#include <iomanip>

void Fibonacci_iterative(int nbr)
{
	int prev1 = 1;
	int prev2 = 1;
	int curnt = 0;
	for(int i = 0; i < nbr ; i++)
	{
		prev1 = curnt;
		curnt = prev2;
		printf("%d  ", curnt);
		prev2 += prev1;
	}
}
int main()
{
	Fibonacci_iterative(10);
	return (0);
}