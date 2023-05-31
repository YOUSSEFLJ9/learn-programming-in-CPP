#include <iostream>
#include <cstdlib>
enum enumrandom{ cabitallitter=2,smolllitter=1, number=3,specialchar=4 };
using namespace std;
int RandomNumber(int from, int to)
{
	int rundemnum = rand()%(to - from +1)+from ;
	
	return rundemnum;
}

/*int readtype()
{
	int inputtype;
	do {
		cout << "******************************************\n";
		cout << "to choose a smoll litter type   :  1\n";
		cout << "to choose cabital litter type   :  2\n";
		cout << "to choose number type           :  3 \n";
		cout << "to choose a special character type:4 \n";
		cout << "******************************************\n";

		cout << "please choose a number:\n ";

	
	cin >> inputtype;
	} while (inputtype < 1 || inputtype>4);
	return inputtype;
}*/
char choosetype(enumrandom inputtype)
{
	char Number = char(RandomNumber(48, 57));
	char smollchar =char( RandomNumber(97, 122));
	char cabitalchar = char(RandomNumber(65, 90));
	char specialchar = char(RandomNumber(33, 47));
	
	switch (inputtype)
	{
	case enumrandom::smolllitter:
		return smollchar;
		break;
	case enumrandom::cabitallitter:
		return cabitalchar;
		break;
	case enumrandom::number:
		return Number ;
		break;
	case enumrandom::specialchar:
		return specialchar ;
		break;
	}


}

int main()
{
	srand((unsigned)time(NULL));
	cout << choosetype(enumrandom::smolllitter) << endl;
	cout << choosetype(enumrandom::cabitallitter) << endl;
	cout << choosetype(enumrandom::number) << endl;
	cout << choosetype(enumrandom::specialchar) << endl;

	return 0; 

}