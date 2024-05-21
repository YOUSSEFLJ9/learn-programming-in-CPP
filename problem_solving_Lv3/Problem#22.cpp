#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

void Fibonacci_Recursive(int nbr, int prev1, int prev2)
{
	int fb = 0;
	if(nbr > 0 )
	{
		if (nbr == 10)
			printf("1  ");
	else
	{
		fb = prev2;
		printf("%d  ", fb);
		prev2 += prev1;
		prev1 = fb;
	}
		Fibonacci_Recursive(nbr -1, prev1 , prev2);
	}
	
}
int main()
{
	Fibonacci_Recursive(10, 1, 1);
	return (0);
}