#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int randomNumber(int from, int to)
{
int Rand = rand()%(to - from +1) +from;
return (Rand);
}
void fillmatrix(int matrix[3][3], short rows, short cols)
{
    for(short i = 0 ; i < rows; i++)
        {
            for (short j = 0;  j < cols; j++)
            {
                matrix[i][j] = randomNumber(0, 100);
            }
            
        }
}
void printmatrix(int matrix[3][3], short rows, short cols)
{
	cout <<"\nThe following is a 3*3 random matrix\n";
    for(short i = 0; i <rows ; i++)
    {
        for(short j = 0; j< cols ; j++)
        {
            cout<<setw(3)<<matrix[i][j]<<setw(3);
        }
        cout<<"\n";
    }
}
void sumcols(int matrix[3][3], int colssum[3],short rows,short cols)
{
	for(short i = 0; i < rows; i++)
	{
        colssum[i] = 0;
		for (short j = 0; j < cols; j++ )
		{
			colssum[i] += matrix[j][i];
		}
	}
}
void printlines(int lines[3],short rows)
{
	cout <<"\nthe following are the sum of each col in the matrix\n";
	for (int i = 0; i < 3; i++)
	{
		printf("Row %d sum = %d\n", i+1, lines[i]);
	}
}
int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3] , cols[3];

    fillmatrix(matrix, 3,3);
    
    printmatrix(matrix,3 ,3);
   sumcols(matrix, cols,3,3);
    printlines(cols,3);   
    return (0);
