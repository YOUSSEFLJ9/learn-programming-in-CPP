#include <iostream>
#include <fstream>
using namespace std;
void printfilecontent(string textfile)
{
    fstream stream;
    stream.open(textfile, ios::in); /*Read mode*/
    if (stream.is_open())
    {
        string line;
        while(getline(stream, line))
        {
            cout<<line<<endl;
        }
        stream.close();
    }
}
int main(void)
{
    printfilecontent("myfile.txt");
    return (0);    
}