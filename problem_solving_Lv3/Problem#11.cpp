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
int  summtx(int arr[3][3], short rows, short cols)
{
	int sum = 0;
	for(int i  = 0; i < rows; i++)
	{
		for(int j = 0; j< cols; j++)
			sum += arr[i][j];
	}
	return(sum);
}
int main(void)
{
	srand((unsigned)time(NULL));
	int matrix1[3][3];
	int matrix2[3][3];
	fullmatrix(matrix1, 3, 3);
	fullmatrix(matrix2, 3, 3);
	std::cout <<"\nthe matrix 1 is :\n";
	printmatirx(matrix1, 3, 3);
	std::cout <<"\nthe matrix 2 is :\n";
	printmatirx(matrix2, 3, 3);
	if (summtx(matrix1, 3,3) == summtx(matrix2,3 ,3))
		printf("Yes: both matrixs are equal\n");
	else
		printf("no:  matrixs are not equal\n");
	return(0);


}