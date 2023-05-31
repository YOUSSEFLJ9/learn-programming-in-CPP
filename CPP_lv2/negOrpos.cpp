#include <iostream>

using namespace std;
int main()
{
     int input;
     string result;
     cout << "please enter a Number \n";
     cin >> input;
    result = input > 0? "its Positive" : "its Negative" ;
    cout << result<<endl;
    return (0);
}