#include <iostream>

using namespace std;
struct employee{
    int salary;
    char sex;
    string name;
};

int main(void)
{
    employee employee1, *ptr;
    employee1.salary = 10;
    employee1.name = "youssef";
    employee1.sex = 'm';
    cout <<employee1.name << endl;
    cout << employee1.salary << endl;
    cout << employee1.sex<< endl;  
    ptr = &employee1;
    cout <<"**************************" << endl;
    cout <<"the pointer to employee\n";
     cout << ptr->name << endl;
    cout << ptr->salary<< endl;
    cout << ptr->sex << endl;
    cout <<"****************************"<<endl;
    ptr->name = "Maroua";
    ptr->salary = 30400;
    ptr->sex = 'f';
    cout <<employee1.name << endl;
    cout << employee1.salary << endl;
    cout << employee1.sex<< endl;

    return 0;
}