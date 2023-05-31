#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct strcinfo
{
	string fullname;
	int age;
	string number;
	string address;
};
void readinfo(strcinfo &infom)
{
	cout << "please enter your full name: ";
	getline(cin, infom.fullname);
	cout << "plese enter your age : ";
	cin >> infom.age;
	cout << "plese enter your number phone : ";
	cin >> infom.number;
	cout << "plese enter your adress : ";
	cin.ignore(1, '\n');
	getline(cin, infom.address);


}
void printinfo(strcinfo infom)
{
	cout << "\n************************************\n";
	cout << "the full name :" << infom.fullname<<endl;
	cout << "AGE : "<<infom.age<<endl;
	cout << "the number phone is :"<<infom.number<<endl;
	cout << "the Adress is :" << infom.address << endl;
	cout << "\n************************************\n";

}
int main()
{
	strcinfo person1,person2;
	readinfo(person1);
	
	readinfo(person2);
	printinfo(person1);
	printinfo(person2);
	


};