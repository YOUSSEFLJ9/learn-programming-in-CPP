using namespace std;
#include <iostream>

int main()
{
	int days, hours, min, sec;
	cout << "plese enter how many days you need\n ";
	cin >> days;
	cout << "plese enter how many hours you need\n";
	cin >> hours;
	cout << "plese enter how many min you need\n";
	cin >> min;
	cout << "plese enter how many sec you need\n";
	cin >> sec;
	int teskderation = ((sec * 1) + (min * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60));
		cout << " tack deration in seconds is : " << teskderation;
	return 0;
}



update


using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	
	float days, hours, minut, sec, TD;
	cout << "please enter how many days you need  :";
	cin >> days;
	cout << "please enter how many hours you need :";
	cin >> hours;
	cout << "please enter how many minut you need : ";
	cin >> minut;
	cout << "please enter how many sec you meed :";
	cin >> sec;
	TD = (sec * 1) + (minut * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60);
	cout << " all the time you need to finish the task is : " << round(TD);

	return 0;
}

updateee 







#include <iostream>
#include <cmath>
#include<string>
using namespace std;
float readpositivenumber(string message)
{

	float Number; 
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
struct sttaskduration 
{
	int days, hours,minutes, seconds;
};
sttaskduration readduration()
{ 
	sttaskduration taskduration;
	taskduration.days = readpositivenumber("please enter how many days :");
	taskduration.hours = readpositivenumber("please enter how many hours :");
	taskduration.minutes = readpositivenumber("please enter how many minutes :");
	taskduration.seconds = readpositivenumber("please enter how many seconds :");
	return taskduration;

}
int Taskduration(sttaskduration taskduration)
{
	int taskduratoninsec; 
	taskduratoninsec = taskduration.days * 24 * 60 * 60;
	taskduratoninsec += taskduration.hours * 60 * 60;
	taskduratoninsec += taskduration.minutes * 60 ;
	taskduratoninsec += taskduration.seconds ;
	return  taskduratoninsec;
	}

int main()
{
	sttaskduration taskduration = readduration();
	cout << endl;
	cout << "*********************************\n";
	cout << "the number of days = " << taskduration.days << endl;
	cout << "the number of hours = " << taskduration.hours << endl;
	cout << "the number of minutes = " << taskduration.minutes << endl;
	cout << "the number of seconds = " << taskduration.seconds << endl;
	cout << "*********************************\n";
	cout << "the task Duration in seconds is  = " << Taskduration(taskduration) << endl;
	cout << "*********************************\n";

	



}
