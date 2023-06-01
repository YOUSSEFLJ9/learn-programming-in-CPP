#include <iostream>

using namespace std;
int MyPower(int N, int M){

    if (M == 0)

    return 1;

    else
    {
    return (N * MyPower(N, (M - 1)));
    }
}
int main()
{
    cout << MyPower(2, 4)<<endl;
}