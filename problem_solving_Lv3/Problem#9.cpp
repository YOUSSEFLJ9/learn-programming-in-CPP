#include <iostream>
#include <string>
#include <cstdlib>

int RandNUmber(int from, int to)
{
	int randNUmber = rand()%(to - from + 1) + from;
	return(randNUmber);
}
void fullmatrix(int arr[3][3], short rows, short cols)
{
	for(short i = 0 ; i < rows; i++)
	{
		for(short j = 0; j < cols; j++)
			arr[i][j] = RandNUmber(1, 20);
	}
}
void printmatrix(int arr[3][3], short rows, short cols)
{
	for(short i = 0; i < rows; i++)
	{
		for(short j = 0; j < cols; j++)
			printf("%0*d  ",2, arr[i][j]);
		printf("\n");
	}
}
void printfmidrow(int arr[3][3], short rows, short cols)
{
	short mid = rows/2;
	for(short j = 0; j< cols; j++)
	{
		printf("%0*d  ", 2, arr[mid][j]);
	}
	printf("\n");
}
void printfmidcols(int arr[3][3], short rows, short cols)
{
	short mid = cols/2;
	for(short j = 0; j < rows; j++)
	{
		printf("%0*d ", 2, arr[j][mid]);
	}
	printf("\n");
}
int main(void)
{
	srand((unsigned)time(NULL));
	int matrix[3][3];
	fullmatrix(matrix ,3,3);
	std ::cout << "\nMatrix:\n";
	printmatrix(matrix,3,3);
	std ::cout <<"\nMiddle Row of Matrix1 is:\n";
	printfmidrow(matrix, 3,3);
	std ::cout <<"\nMiddle Col of Matrix1 is:\n";
	printfmidcols(matrix, 3,3);
	return (0);



}