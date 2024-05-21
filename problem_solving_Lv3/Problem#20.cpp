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
bool is_Palindrome(int matrix[3][3], int row)
{
	for(int i = 0; i < row; i++)
	{
		if(matrix[i][2] != matrix[i][0])
			return (0);
	}
	return (1);
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
	if(is_Palindrome(matrix, 3))
		printf("yes the matrix is Palindrome\n");
	else
		printf("NO the matrix is NOT Palindrome\n");
	return (0);
}