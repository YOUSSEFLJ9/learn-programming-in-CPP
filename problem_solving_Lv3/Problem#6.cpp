#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void fillmatrix(int matrix[3][3], short rows, short cols)
{
    short number = 0;
    for(short i = 0 ; i < rows; i++)
        {
            
            for (short j = 0;  j < cols; j++)
            {
                matrix[i][j] = ++number;
            }
            
        }
}
void printmatrix(int matrix[3][3], short rows, short cols)
{
	cout <<"\nThe following is a 3*3 ordred matrix:\n";
    for(short i = 0; i <rows ; i++)
    {
        for(short j = 0; j< cols ; j++)
        {
            cout<<setw(3)<<matrix[i][j]<<setw(3);
        }
        cout<<"\n";
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3] , cols[3];

    fillmatrix(matrix, 3,3);
    
    printmatrix(matrix,3 ,3);
    return (0);
}