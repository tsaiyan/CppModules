#include <iostream>
#define RED "\x1B[31m"

/*
 $>./megaphone "shhhhh... I think the students are asleep..."
 SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
 $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
 DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
 $>./megaphone
 * LOUD AND UNBEARABLE FEEDBACK NOISE *
 $>
 */

int main(int argc, const char * argv[])
{
	if (argc == 1)
		std::cout << RED << " * LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j < argc; j++)
			for (int i = 0; argv[j][i]; i++)
				std::cout << (char)toupper(argv[j][i]);
		std::cout << std::endl;
	}
	return (0);
}
