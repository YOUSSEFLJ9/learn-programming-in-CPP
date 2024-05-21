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
			arr[k][j] = randnumber(1, 10);
			j++;
		}
		k++;
	}
}
short count_theNUmber(int matrix[3][3], int row, int cols, int nbr)
{
	short counter = 0;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == nbr)
				counter++;
		}
	}
	return (counter);
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
int main(void)
{
	srand((unsigned int) time(NULL));
	std::cout << "\nthe matrix is :\n";
	int matrix[3][3];
	fullmatrix(matrix, 3, 3);
	printmatirx(matrix, 3, 3);
	std::cout<<"Enter the Number to count in matrix? ";
	int nbr = 0;
	std::cin >> nbr;
	int counter = count_theNUmber(matrix, 3, 3, nbr);
	printf("the Number %d count in the matrix is %d\n", nbr, counter);
	return (0);
}