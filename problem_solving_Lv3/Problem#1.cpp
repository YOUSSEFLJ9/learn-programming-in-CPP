
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
void fillmatrix(int matrix[3][3])
{
    for(int i = 0 ; i < 3; i++)
        {
            for (int j = 0;  j < 3; j++)
            {
                matrix[i][j] = randomNumber(0, 100);
            }
            
        }
}
void printmatrix(int matrix[3][3])
{
    for(int i = 0; i <3 ; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            cout<<setw(3)<<matrix[i][j]<<setw(3);
        }
        cout<<"\n";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3];

    fillmatrix(matrix);
    printmatrix(matrix);
    return (0);
}