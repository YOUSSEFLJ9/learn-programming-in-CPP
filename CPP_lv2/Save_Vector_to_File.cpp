#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void SaveVectorToFile(string textfile,vector<string> args)
{
    fstream stream;
    stream.open(textfile, ios::out); 
    if (stream.is_open())
    {
       for(string line : args)
       {
            if (line != "")
            {
                stream << line <<endl;
            }        
       }
        stream.close();
    }
}
int main(void)
{
    vector <string> args {"youssef","ahmed","sami","a"};
    SaveVectorToFile("myfile.txt", args);

    return (0);    
}