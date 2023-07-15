#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
void SaveVectorToFile(string textfile,vector<string> args){
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
void LoadDataFormFileTovc(string textfile,vector<string> &args){
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
void Update_Record_form_File(string textfile,string record, string update){
    vector<string> args;
    LoadDataFormFileTovc( textfile, args);
    for (string &line : args)
    {
        if (line == record)
        {
            line = update;
        }
    }
    SaveVectorToFile(textfile, args);
}
int main()
{
    printfilecontent("text.txt");
    Update_Record_form_File("text.txt", "rawya", "Qamar");
    printfilecontent("text.txt");

    return 0;   
}