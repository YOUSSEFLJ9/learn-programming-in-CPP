#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b, int c);
double sum(double a, double b);
int main()
{
    cout << sum(3, 6) << endl;
    cout << sum(4.3 ,3.2) << endl;
    return (0);
}
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
double sum(double a, double b)
{
    return (a + b);
}