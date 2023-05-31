#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum EnOPType {Plus = 1, Sub = 2, Mul = 3 , Div = 4, Mix = 5};
enum EnQuestionLevel  { Easy = 1, Med = 2, Hard = 3, MixOp = 4 };
string GetOpTypeSymbol(EnOPType OpType)
{
	switch (OpType)
	{
	case Plus:
		return "+";
	case Sub:
		return "-";
	case Mul:
		return "*";
	case Div:
		return "/";
	case Mix :
		return "Mix";

	default:
		return "+";
	}
}
string GetQuestionLevelSymbol(EnQuestionLevel QuestionLevel)
{
	string arryQuestionLevelText[4] = { "Easy" ,"Med","Hard","Mix" };
	return arryQuestionLevelText[QuestionLevel - 1];
}
struct StQuestion {
	short Number1;
	short Number2;
	EnOPType  OperationType;
	EnQuestionLevel QuestionLevel;
	short RightAnswer;
	short UserAnswer;
	bool isPASS = true;
};
struct StQuizz {
 
	StQuestion QuestionList[100];
	short NumberofQuestions;
	bool IsPASS;
	EnOPType OperationType;
	EnQuestionLevel QuestionLevel;
	short NumofRightAnswer=0;
	short NumofWrongAnswer = 0;
};
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
EnQuestionLevel GetRandomQuestionLevel()
{
	int A = RandomNumber(1, 3);
	return (EnQuestionLevel)A;
}
int SimpleCalculateur(int Number1, int Number2, EnOPType OperationType)
{
	switch (OperationType)
	{
	case Plus:
		return Number1 + Number2;
	case Sub:
		return 	Number1 - Number2;
	case Mul:
		return Number1 * Number2;
	case Div:
		return Number1 / Number2;

	default:
		return Number1 + Number2;
	}
}
StQuestion GenrateQuestion(EnOPType OperationType, EnQuestionLevel QuestionLevel)
{
	StQuestion Question;
	if (OperationType == EnOPType::Mix)
	{
		OperationType = (EnOPType)RandomNumber(1, 4);
	}
	if (QuestionLevel== EnQuestionLevel::MixOp)
	{
		QuestionLevel =GetRandomQuestionLevel();
	}
	Question.OperationType = OperationType;
	switch (QuestionLevel)
	{
	case Easy:
		Question.Number1 = RandomNumber(1,10);
		Question.Number2 = RandomNumber(1, 10);
		Question.RightAnswer = SimpleCalculateur(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;

	case Med:
		Question.Number1 = RandomNumber(10, 50);
		Question.Number2 = RandomNumber(10, 50);
		Question.RightAnswer = SimpleCalculateur(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
	case Hard:
		Question.Number1 = RandomNumber(50, 100);
		Question.Number2 = RandomNumber(50, 100);
		Question.RightAnswer = SimpleCalculateur(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
	
	}

}
short readRounds()
{
	short rounds;
	do {
		cout << "please enter how many Rounds you want :\n";
		cin >> rounds;
	} while (rounds < 0 || rounds>10);
	return rounds;
}
EnOPType readOPType()
{
	short QuestionType;
	do {
		cout << "enter operation you want  plus =1, sub=2 , Mul =3, Div =4 , Mix= 5\n";
		cin >> QuestionType; 
	} while (QuestionType < 0 || QuestionType>5);
	return  (EnOPType) QuestionType;
	
}
EnQuestionLevel readQuestionlevel()
{
	short QuestionLevel;
	do {
		cout << "enter Level you want  easy =1, med=2 , hard =3, Mix= 4\n";
		cin >> QuestionLevel;
	} while (QuestionLevel < 0 || QuestionLevel>4);
	return (EnQuestionLevel)QuestionLevel;


} 
void genratQuestionsQuizz(StQuizz &Quizz)
{
	for (short Question = 0; Question < Quizz.NumberofQuestions; Question++)

	{
		Quizz.QuestionList[Question] = GenrateQuestion(Quizz.OperationType, Quizz.QuestionLevel);
	}
}
void PrintTheQuestions(StQuizz& Quizz, short QuestionNumber)
{
	cout << "\n";
	cout << "Question [" << QuestionNumber +1 << "] \n\n";
	cout << Quizz.QuestionList[QuestionNumber].Number1<<endl;
	cout << Quizz.QuestionList[QuestionNumber].Number2 << "  ";
	cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
	cout << "\n_________" << endl;
}
short ReadQuestionAnswer()
{
	int Answer = 0; 
	cin >> Answer;
	return Answer;
}
void  SetScreenColor(bool Right)
{
	if (Right == true)
	{	system("color 2F"); //this to turn Screen Green; 
	}
	else
	{
		system("color 4F");//to Turn Screen Red;
		cout << "\a";
	}
}
void CourectTheQuestionAnswer(StQuizz& Quizz, short QuestionNumber)

{
	if (Quizz.QuestionList[QuestionNumber].UserAnswer != Quizz.QuestionList[QuestionNumber].RightAnswer)
	{
		Quizz.NumofWrongAnswer++;

		Quizz.QuestionList[QuestionNumber].isPASS = false;
		cout << "\n\nWorng Answer :-(  \n";
		cout << "The Right Answer is : " << Quizz.QuestionList[QuestionNumber].RightAnswer << endl;
		cout << "*************************************\n\n";
    }
	else {
		Quizz.QuestionList[QuestionNumber].isPASS = true;
		Quizz.NumofRightAnswer++;
		cout << "\n\nYour Answer is Right :-) \n";
		cout << "*************************************\n\n";
	}
	cout << "\n";
	SetScreenColor(Quizz.QuestionList[QuestionNumber].isPASS);
}
void AskandCorrectQuestionsAnswers (StQuizz & Quizz)
{
	for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberofQuestions; QuestionNumber++)
	{
		PrintTheQuestions(Quizz, QuestionNumber);
		Quizz.QuestionList[QuestionNumber].UserAnswer = ReadQuestionAnswer();
		CourectTheQuestionAnswer(Quizz,QuestionNumber);


	}
	Quizz.IsPASS = (Quizz.NumofRightAnswer >= Quizz.NumofWrongAnswer);
}
string GetFinalResultsText(bool PASS)
{
	if (PASS)
	{
		system("color 2F");
		return "PASS :-) \n";
	}
	else {
		system("color 4F");
		return "Fail :-( \n";
	}

}
void PrintFinalRusalts(StQuizz Quizz)
{
	cout << "\n";
	cout << "-----------------------------------------------\n\n";
	cout << "Final Results is " << GetFinalResultsText(Quizz.IsPASS);
	cout << "-----------------------------------------------\n\n";
	cout << "Number of Questions     : " << Quizz.NumberofQuestions << endl;
	cout << "Questuion Level         : " << GetQuestionLevelSymbol( Quizz.QuestionLevel) << "\n";
	cout << "Operation Type          : " << GetOpTypeSymbol(Quizz.OperationType) << endl;
	cout << "Number Of Right Answers : " << Quizz.NumofRightAnswer << endl;
	cout << "Number Of Wrong Answers : " << Quizz.NumofWrongAnswer << "\n";
	cout << "-----------------------------------------------\n\n";
}
void Playmatchgame()
{
	StQuizz Quizz;
	Quizz.NumberofQuestions = readRounds();
	Quizz.QuestionLevel = readQuestionlevel();
	Quizz.OperationType = readOPType();
	genratQuestionsQuizz(Quizz);
	AskandCorrectQuestionsAnswers(Quizz);
	PrintFinalRusalts(Quizz);

}
void RestScreen()
{
	system("cls");
	system("color 0F");
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
	if (key == 'Y' || key == 'y')
		return 1;
	else return 0;
}
void SatrtGame()
{
	do {
		RestScreen();
		Playmatchgame();
} while (keytoNum(Key()) == 1);

}
int main()
{
	srand((unsigned) time(NULL));
	SatrtGame();
	return 0;
	
}