/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:48:04 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/05 19:48:35 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			PhoneBook.searchContact();
		else if (command == "EXIT")
			printf("EXIT\n");
		else
			std::cout << "NO COMMAND"  << std::endl;
	}
	return 0;
}
