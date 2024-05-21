#include <iostream>
#include <string>
#include <iomanip>

int randnumber(int from , int to)
{
	int rndnum = rand() % (to - from + 1) + from;
	return(rndnum % 3);
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
			if (!((i == j && arr[i][j] == arr[0][0]) || (i != j && arr[i][j] == 0)))
				return (0);
		}
	}
	return (1);
}
int main()
{
	srand((unsigned)time(NULL));

	// int matrix1[3][3];
	// fullmatrix(matrix1, 3, 3);
	std::cout <<"\nthe matrix 1 is :\n";
	int matrix1[3][3] = { {5,0,0} ,{0,5,0} ,{0,0,5} }; 
	printmatirx(matrix1, 3, 3);
	if (isidentity(matrix1,3,3))
		printf("yes: the matrixs is Scalar\n");
	else
	{
		printf("no: the matrixs is Not Scalar\n");
		exit(1);
	}
	return (0);
}