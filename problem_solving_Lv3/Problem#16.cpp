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
bool is_sparce(int matrix[3][3], int row, int cols)
{
	short counter = 0;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == 0)
				counter++;
		}
	}
	int size = row* cols;
	return (counter >= (size / 2 )? 1 : 0);
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
	if(is_sparce(matrix, 3, 3))
		printf("yes the matrix is Sparce\n");
	else
		printf("NO the matrix is NOT Sparce\n");
	return (0);
}