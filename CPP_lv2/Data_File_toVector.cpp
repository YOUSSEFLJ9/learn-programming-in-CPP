#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void LoadDataFormFileTovc(string textfile,vector<string> &args)
{
    fstream stream;
    stream.open(textfile, ios::in); /*Read mode*/
    if (stream.is_open())
    {
        string line;
        while(getline(stream, line))
        {
            args.push_back(line);
        }
        stream.close();
    }
}
int main(void)
{
    vector <string> args;
    LoadDataFormFileTovc("myfile.txt", args);
    for (string arg : args)
    {
        cout << arg << endl;       
    }
    return (0);    
}