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
short print_Inersected(int matrix_1[3][3],int matrix_2[3][3] ,int row, int cols)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			for(int k = 0 ; k < row ; k++)
			{
				for(int u = 0; u < cols ; u++)
				{
					if(matrix_1[i][j] == matrix_2[k][u])
						printf("%d   ", matrix_1[i][j]);
				}
			}
		}
	}
	return (0);
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
	std::cout << "\nthe matrix 1 is :\n";
	int matrix[3][3];
	fullmatrix(matrix, 3, 3);
	printmatirx(matrix, 3, 3);
	int matrix1[3][3];
	std::cout << "\nthe matrix 2 is :\n";
	fullmatrix(matrix1, 3, 3);
	printmatirx(matrix1, 3, 3);
	std::cout<<"Inersected Numbers are: ";
	print_Inersected(matrix, matrix1, 3, 3);
	printf("\n");
	return (0);
}