#include<iostream>
#include<cmath>
using namespace std;
void abccr()
{
	int conter = 65;
	for (conter; conter <= 90; conter++)
	{
		for (int cont1 = 65; cont1 <= 90; cont1++)
		{
			cout << char(conter) << char(cont1) << endl;
		}
	};
}
int main()
{
	abccr();
	return 0;
};
