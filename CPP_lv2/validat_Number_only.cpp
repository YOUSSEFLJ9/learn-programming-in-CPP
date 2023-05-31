#include <iostream>
using namespace std;
int ReadonlyNumbers()
{
    int Num;
    cout << "please enter a Number\n";
    cin >> Num;
    while (cin.fail())
    {
        /*the user did not enter a Number*/
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalide a Number, please enter a valid number\n";
        cin >> Num;
    }
    return (Num);
}
int main()
{
    cout << "your Number is :" << ReadonlyNumbers();
    return (0);
}