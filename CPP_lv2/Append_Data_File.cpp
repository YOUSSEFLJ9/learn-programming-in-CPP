#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream stream;
    stream.open("myfile.txt", ios::out | ios ::app); /*this mean the file in A (Append mode)*/
    if (stream.is_open())
    {
        stream << "hello world , with option to append mode stdout stream\n";
        stream << "this is the sconed stream\n";
        stream.close();
    }
return 0;
}