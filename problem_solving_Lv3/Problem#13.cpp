#include <iostream>
#include <string>
#include <iomanip>

int randnumber(int from , int to)
{
	int rndnum = rand() % (to - from +1) + from;
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
int  isidentity(int arr[3][3], short rows, short cols)
{
	for(int i = 0 ; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if (!((i == j && arr[i][j] == 1) || (i != j && arr[i][j] == 0)))
				return (0);
		}
	}
	return (1);
}
int main()
{
	srand((unsigned)time(NULL));
	int matrix1[3][3];
	fullmatrix(matrix1, 3, 3);
	std::cout <<"\nthe matrix 1 is :\n";
	// int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} }; 
	printmatirx(matrix1, 3, 3);
	if (isidentity(matrix1,3,3))
		printf("yes: the matrixs is identity\n");
	else
		printf("no: the matrixs is Not identity\n");
	return (0);
}