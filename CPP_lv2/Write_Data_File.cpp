#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream stream;
    stream.open("myfile.txt", ios::out); /*this mean the file in W (write mode)*/
    if (stream.is_open())
    {
        stream << "hello world , this my first stdout stream\n";
        stream << "this is the sconed stream\n";
        stream.close();
    }
return 0;
}