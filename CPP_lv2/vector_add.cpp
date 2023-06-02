#include <iostream>
#include <vector>
using namespace std;
void readint(vector <int> &A)
{
    int input;
    char validated = 'y';
    while(validated == 'y' || validated == 'Y')
    {
    cout << "please enter a number\n";
    cin >> input;
    A.push_back(input);
    cout << "do you want to add other element (y, Y, n, N)" << endl;
    cin >> validated;
    }
}
void printNumber(vector <int> A)
{
    cout <<"\n*******************************************\n";
    for (int &i : A)
    {
        printf("%d\n", i);

    };
}  
int main()
{
    vector <int> A;
    
    readint(A);
    printNumber(A);
    return 0;
}