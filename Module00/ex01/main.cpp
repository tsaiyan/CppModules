//
//  main.cpp
//  с++ learning
//
//  Created by Torres Saiyan on 7/3/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CLEAR		"\033[37m"

#include "PhoneBook.hpp"

int main(int argc, const char * argv[]) {
	PhoneBook PhoneBook;
	std::string command;

	PhoneBook.printIntro();
	while (true)
	{
		std::cout << "Enter the command"  << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.addContact();
		else if (command == "SEARCH")
			printf("SEARCH\n");
		else if (command == "EXIT")
			printf("EXIT\n");
		else
			std::cout << "NO COMMAND"  << std::endl;
	}
	return 0;
}
