#include <iostream>
#include <cstdlib>

using namespace std;
int RandemNumber(int from, int to)
{
	int rundemnum = rand() % (to - from + 1) + from;

	return rundemnum;
}
int readNumber(string message)
{
	int repNumber;
	do {
		cout << message << endl;
		cin >> repNumber;
	} while (repNumber < 0);
	return repNumber;
}

void  choosetype(int reptNumber)
{
	for (int i = 1; i <= reptNumber; i++)
	{
		cout << "Key [" << i << "] : ";
		for (int k = 1; k <= 4; k++)
		{
			for (int j = 1; j <= 4; j++)
			{
				cout << char(RandemNumber(65, 90));
			}
			if (k == 4) 
			{
				break;
			}
			cout << "-";
		}
		cout << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	choosetype(readNumber("please enter a positive Number :"));
	return 0;

}


update ::



#include <iostream>
#include <cstdlib>
enum enumrandom { cabitallitter = 2, smolllitter = 1, number = 3, specialchar = 4 };
using namespace std;
int RandomNumber(int from, int to)
{
	int rundemnum = rand() % (to - from + 1) + from;

	return rundemnum;
}
int readnumber(string message)
{
	int inputtype;
	do {
		

		cout << message <<endl;


	cin >> inputtype;
	} while (inputtype < 0 );
	return inputtype;
}
char getrandomchar(enumrandom inputtype)
{
	switch (inputtype)
	{
	case enumrandom::smolllitter:
		return char(RandomNumber(97, 122));
		break;
	case enumrandom::cabitallitter:
		return char(RandomNumber(65, 90));
		break;
	case enumrandom::number:
		return char(RandomNumber(48, 57));
		break;
	case enumrandom::specialchar:
		return char(RandomNumber(33, 47));
		break;
	}

  
}
string generatword(enumrandom inputtype, short length)
{
	string word;
	for (int i = 1; i <= length; i++)
	{
		word = word + getrandomchar(inputtype);
	}
	return word;


}
string generatkey()
{
	string key = "";
	key = generatword(enumrandom::cabitallitter, 4) + "-";
	key = key + generatword(enumrandom::cabitallitter, 4) + "-";
	key = key + generatword(enumrandom::cabitallitter, 4) + "-";
	key = key + generatword(enumrandom::cabitallitter, 4);
	return key;
}
void generatkeys(short numberofkeys)
{
	for (int i = 1; i <= numberofkeys; i++)
	{

		cout << "Key ["<<i<<"]:" << generatkey() << endl;
	}

}
int main()
{
	srand((unsigned)time(NULL));
	generatkeys(readnumber("please enter the number of keys you want to Generat :"));

	return 0;

}