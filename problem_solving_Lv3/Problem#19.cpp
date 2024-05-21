#include <iostream>
#include <string>
#include <iomanip>

int randnumber(int from , int to)
{
	int rndnum = rand() % (to - from + 1) + from;
	return(rndnum);
}
void fullmatrix(int arr[3][3],short  rows, short cols)
{

	short k = 0;
	while(k < rows)
	{
		short j = 0;
		while(j < cols)
		{
			arr[k][j] = randnumber(1, 100);
			j++;
		}
		k++;
	}
}
void printmatirx(int arr[3][3], short rows, short cols)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols ; j++)
		{
			printf("%0*d  ", 2, arr[i][j]);	
		}
		printf("\n");
	}
}
short num_max_min(int matrix[3][3], short rows, short cols, bool is_max)
{
	int nbr;
	is_max == 1 ? nbr = -10000 : nbr = 10000; 
	for(int i = 0; i < rows; i++)
	{
		for(int k = 0; k < cols; k++)
		{
			if(is_max)
			{
				if(nbr <= matrix[i][k])
					nbr = matrix[i][k];
			}
			else
			{
				if(nbr >= matrix[i][k])
					nbr = matrix[i][k];
			}
		}
	}
	return(nbr);
}
int main(void)
{
	srand((unsigned int) time(NULL));
	std::cout << "\nthe matrix 1 is :\n";
	int matrix[3][3];
	fullmatrix(matrix, 3, 3);
	printmatirx(matrix, 3, 3);
	short min, max;
	min = num_max_min(matrix, 3, 3, 0);
	max = num_max_min(matrix, 3, 3, 1);
	printf("Min Number are is %d \n\nMax Number are is %d \n", min, max);
	printf("\n");
	return (0);
}