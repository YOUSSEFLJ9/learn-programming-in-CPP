#include <iostream>
using namespace std;

void PrintNmbr(int N, int M)
{
    if (N <= M)
    {
        cout<< M<< endl;
        PrintNmbr(N, M - 1);
    }
}
int main()
{
    PrintNmbr(1, 10);
}