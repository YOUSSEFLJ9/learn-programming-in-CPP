#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>


int main()
{
	std:: string name;
	std::cout << "plase enter your name\n";
 	getline(std::cin, name);

	int i = 0;
	std:: cout << "\nFirst letters of this string: \n"; 
	while(name[i])
	{
		if(i == 0 && name[i] != ' ')
			printf("%c\n", name[i]);
		else if (i != 0 && name[i] != ' ' && name[i - 1] == ' ')
			printf("%c\n", name[i]);
		i++;
	}
}