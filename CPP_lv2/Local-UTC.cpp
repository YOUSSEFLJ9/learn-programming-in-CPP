#pragma worning (disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;
int main(void)
{
    time_t t = time(0);
    char *dt = ctime(&t);

cout<<"Local time and date is : "<< dt<<endl;
tm *gmtm = gmtime(&t);
dt = asctime(gmtm);
cout << "UTC date and time is: " << dt;

    return (0);

}