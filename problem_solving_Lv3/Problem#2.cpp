
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
    for(short i = 0 ; i < 3; i++)
        {
            for (short j = 0;  j < 3; j++)
            {
                matrix[i][j] = randomNumber(0, 100);
            }
            
        }
}
void printmatrix(int matrix[3][3], short rows, short cols)
{
	
    for(int i = 0; i <rows ; i++)
    {
        for(int j = 0; j<rows ; j++)
        {
            cout<<setw(3)<<matrix[i][j]<<setw(3);
        }
        cout<<"\n";
    }
}
int RowSum(int matrix[3][3],short rownumber, short cols)
{
    int sum =0;
	for(short j = 0; j < cols; j++)
	{
		sum += matrix[rownumber][j];
	}
    return sum;    
}
void printlines(int matrix[3][3], short rows,short cols)
{
	cout <<"\nthe following are the sum of each row in the matrix\n";
	for (short i = 0; i < rows; i++)
	{
	cout  <<" Row " << i + 1 << " Sum = " << RowSum(matrix,i, cols) << endl;
	}
}
int main()
{
    srand((unsigned)time(NULL));
    cout <<"\nThe following is a 3*3 random matrix\n";
    int matrix[3][3];
 fillmatrix(matrix, 3, 3);
     printmatrix(matrix,3,3);
    
    printlines(matrix,3,3);
    
    return (0);
}
