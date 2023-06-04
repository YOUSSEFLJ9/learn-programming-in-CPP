#include<iostream>
#include<vector>
using namespace std;

struct stemployee
{
    string firstname;
    string lastname;
    int salary;
};
void Read_emp(stemployee &tmpemployee)
{
    cout<<"please enter firstname \n";
    cin>> tmpemployee.firstname;
    cout<<"please enter lastname \n";
    cin>> tmpemployee.lastname;
    cout<<"please enter salary\n";
    cin>> tmpemployee.salary;

}
void Print_emp(vector<stemployee> &vecemp)
{
    for (stemployee &employee : vecemp)
    {
        cout<<"***************************************************\n";
        cout<<"fullname : "<<employee.firstname << " "<<employee.lastname<<endl;
        cout<<"salary   : "<<employee.salary<<endl;

    }
}


int main()
{
    char validation = 'Y';
    stemployee tmpemployee;
     vector <stemployee> vecemp;
    while (validation == 'Y' || validation == 'y') 
    {
        Read_emp(tmpemployee);
        vecemp.push_back(tmpemployee);
        cout<<"do you want to add more employee ?(Y,y,N,n)\n";
        cin>> validation;
    }
    Print_emp(vecemp);
    return(0);
}