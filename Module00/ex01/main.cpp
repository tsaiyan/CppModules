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

#include "PhoneBook.hpp"

int main() {
	PhoneBook	PhoneBook;
	std::string	command;

	PhoneBook.printIntro();
	while (true)
	{
		std::cout << "Enter the command"  << std::endl;
		if (!std::getline(std::cin, command))
			return (1);
		if (command == "ADD")
			PhoneBook.addContact();
		else if (command == "SEARCH")
			PhoneBook.searchContact();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "BAD COMMAND"  << std::endl;
	}
	return 0;
}
