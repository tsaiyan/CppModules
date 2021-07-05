/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:47:16 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/05 19:47:18 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
	std::cout << "NEW CONTACT" << std::endl;
	this->Contacts.newContact();
}

void PhoneBook::searchContact()
{
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".                     Contact list                    ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".     ___________________________________________     ." << std::endl;
	std::cout << ".     | Index  |First Name|Last  name| Nickname |     ." << std::endl;
	this->Contacts.printContacts();
	std::cout << ".     |________|__________|__________|__________|     ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	this->Contacts.selectContact();
}

void PhoneBook::printIntro()
{
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".                Awesome PhoneBook                    ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ". Welcome to the 80s and its unbelievable technology! ." << std::endl;
	std::cout << ".              This is a phonebook.                   ." << std::endl;
	std::cout << ".           You can add max 8 contacts.               ." << std::endl;
	std::cout << ".  Then you add more, the odldest will be deleted.    ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ".                 Available commands:                 ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ".     EXIT: The program quits                         ." << std::endl;
	std::cout << ".           and the contacts are lost forever.        ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ".     ADD:  Add a new contact to phonebook.           ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ".     SEARCH:  The program will display               ." << std::endl;
	std::cout << ".     a list of the available non-empty contacts.     ." << std::endl;
	std::cout << ".                                                     ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << std::endl;
}
