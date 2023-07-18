#include <cstdlib>
#include <iostream>
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
                matrix[i][j] = randomNumber(0, 10);
            }
            
        }
}
void printmatrix(int matrix[3][3], short rows, short cols)
{
	
    for(short i = 0; i <rows ; i++)
    {
        for(short j = 0; j< cols ; j++)
        {
            cout<<setw(2) << setfill('0')<<matrix[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
void mulm2atrixs(int matrix1[3][3], int matrix2[3][3],int matrix3[3][3] ,short rows, short cols)
{
    for (int i = 0 ; i<rows ; i++)
    {
        for(int j = 0; j < cols;j++)
        {
                matrix3[i][j]= matrix1[i][j] * matrix2[i][j];
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];

cout <<"MATRIX 1:\n";
    fillmatrix(matrix1, 3,3);    
    printmatrix(matrix1,3 ,3);
    cout <<"MATRIX 2:\n";
    fillmatrix(matrix2, 3,3);    
    printmatrix(matrix2,3 ,3);
    cout <<"mul matrix1 on matrix2\n";
    mulm2atrixs(matrix1,matrix2,matrix3, 3,3);
    printmatrix(matrix3,3 ,3);
     
    return (0);
}