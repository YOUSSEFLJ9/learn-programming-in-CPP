#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum PossibleMove { stone = 1, Paper = 2, Scissor = 3 };
enum whowin {player=1,computer=2,draw};
struct StGameresultat
{
	int win ;
	int lose ;
	int draw ;
};
int readNumber(string Message)
{
	int Number;
	do {
		cout << Message ;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int readNumberfromto(string Message,int from ,int to )
{
	int Numberenter;
	do {
		Numberenter = readNumber(Message);
	} while (Numberenter < from || Numberenter > to);
	return Numberenter;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
PossibleMove fromNumbertoPssibleMove(int  Number )
{
	PossibleMove gamefacteur;
	gamefacteur = (PossibleMove)Number;
	return gamefacteur;
}
string ReturnMovesofGame(int &Number)
{
	PossibleMove gamefacteur = fromNumbertoPssibleMove(Number);
	switch (gamefacteur)
	{
	case stone:
		return "stone";
	case Paper:
		return "Paper";
	case Scissor:
		return "Scissor";
	}
}
void TherolesofGame(PossibleMove Player, PossibleMove Computer, StGameresultat &Gameresultat,whowin & resutlatwin)
{
	switch (Player)
	{
	case stone:
		switch (Computer)
		{
		case stone:
			Gameresultat.draw= Gameresultat.draw+1;
			resutlatwin = whowin::draw;
			break;
		case Paper:
			Gameresultat.lose++;
			resutlatwin = whowin::computer;
			break;
		case Scissor:
			Gameresultat.win++;
			resutlatwin = whowin::player;
			break;
		}
		break;
	case Paper:
		switch (Computer)
		{
		case stone:
			Gameresultat.win++;
			resutlatwin = whowin::player;
			break;
		case Paper:
			Gameresultat.draw++;
			resutlatwin = whowin::draw;
			break;
		case Scissor:
			Gameresultat.lose++;
			resutlatwin = whowin::computer;
			break;
		default:
			break;
		}
		break;
	case Scissor:
		switch (Computer)
		{
		case stone:
			Gameresultat.lose++;
			resutlatwin = whowin::computer;

			break;
		case Paper:
			Gameresultat.win++;
			resutlatwin = whowin::player;
			break;
		case Scissor:
			Gameresultat.draw++;
			resutlatwin = whowin::draw;
			break;
			;
		}
		break;
	}

}
string returntextwiner(whowin& resutlatwin)
{
	if (resutlatwin == whowin::player)
	{
		system("color 2F");
		return "Player";
	}
	else if (resutlatwin == whowin::draw)
	{
		system("color 6F");
		return "No Winner";
	}
	else if (resutlatwin == whowin::computer)
		system("color 4F");
		return "Computer\a";
}
void Pintresutofround(int counter,int Player,int Computer, whowin  resutlatwin)
{
	cout << "\n\n\n___________________Round [" << counter << "] ___________________\n\n";
	cout << "Player   choice: " << ReturnMovesofGame(Player) << endl;
	cout << "Computer choice: " << ReturnMovesofGame(Computer) << endl;
	cout << "Round winner   : [" << returntextwiner(resutlatwin)<<"]";
	cout << "\n\n________________________________________________\n\n" << endl;
}
void Gameoverscreen()
{
	cout << "\t\t\_________________________________________________________________\n\n";
	cout << "\t\t\t\t+++ G a m e   O v e r +++\n\n";
		cout << "\t\t\_________________________________________________________________\n\n\n";

}
void Printthemaingame(StGameresultat& Gameresultat ,int &Rounds)
{
	whowin resutlatwin;
	 Rounds = readNumberfromto("How Many Rounds 1 to 10 ?\n", 1, 10);
	int counter = 0;
	do {
		counter++;
		cout << "\nRound [" << counter << "] Begins :\n" << endl;
		int Player = readNumberfromto("Your Choice: [1]:Stone, [2]:Paper, [3]:Scisser ? ", 1, 3);
		ReturnMovesofGame(Player);
		int Computer = RandomNumber(1, 3);
		 ReturnMovesofGame(Computer);
		 TherolesofGame(fromNumbertoPssibleMove(Player), fromNumbertoPssibleMove(Computer), Gameresultat, resutlatwin);
		 Pintresutofround(counter, Player, Computer, resutlatwin);
	} while (counter < Rounds);
}
string Finalwinner(StGameresultat& Gameresultat)
{
	if (Gameresultat.win > Gameresultat.lose)
	{
		return "Player";
	}
	 else if (Gameresultat.win < Gameresultat.lose)
	{
		return "Computer";
	}
	 else if (Gameresultat.win == Gameresultat.lose)
	{
		return "No Winner";
	}
	 else { return "Error"; }
}
void showFinalGameresult(StGameresultat& Gameresultat,int Rounds)
{
	cout << "\t\t\________________________ [Game Results ]________________________\n\n";
	cout << "\t\t\Game Rounds      \t : " << Rounds<<endl;
	cout << "\t\tPlayer won times  \t : " << Gameresultat.win<<endl;
	cout << " \t\tComputer win times  \t : " << Gameresultat.lose << endl;
	cout << "\t\tDraw times        \t : " << Gameresultat.draw << endl;
	cout << "\t\tFinal Winner      \t : " << Finalwinner(Gameresultat)<<endl;
	cout << "\t\t\________________________________________________________________\n\n";
}
void restscreen()
{
	system("color 0F");
	system("cls");
}
char Key()
{
	char Again;
	do {
		cout << "Do you want to play Again ? {Y /N}   ";
		cin >> Again;
	} while (Again != 'Y' && Again != 'y' && Again != 'n' && Again != 'N');
	return Again;
}
int keytoNum(char key)
{
	if (key == ' Y' || key == 'y')
		return 1;
	else return 0;
}
void Startgame()
{
	do {
		restscreen();
		int Rounds;
		StGameresultat Gameresultat;
		Gameresultat.draw = 0;
		Gameresultat.lose = 0;
		Gameresultat.win = 0;
		Printthemaingame(Gameresultat, Rounds);
		Gameoverscreen();
		showFinalGameresult(Gameresultat, Rounds);
		
	} while (keytoNum(Key())==1);

}
int main()
{
	srand((unsigned)time(NULL));
	Startgame();
}