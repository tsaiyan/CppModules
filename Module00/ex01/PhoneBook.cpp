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

PhoneBook::PhoneBook(){
	for (int i = 1; i < 9; i++)
		this->Contacts[i].setId(i);
	this->curId = 1;
	this->deleteContact = false;
	this->totalContacts = 0;
}

void PhoneBook::addContact()
{
	std::cout << "NEW CONTACT" << std::endl;
	this->Contacts[this->curId].newContact();
	if (this->Contacts[this->curId].ContactIsEmpty())
		std::cout << "No one field is filled!" << std::endl;
	else {
		std::cout << "Contact with id " << this->curId << " is added!" << std::endl;
		std::cout << std::endl;
		curId++;
		if (curId > 8)
			curId = 1;
		if (this->totalContacts < 9)
			this->totalContacts++;
	}
}

void PhoneBook::searchContact()
{
	if (this->totalContacts == 0) {
		std:: cout << "NO CONTACTS!" << std::endl;
		return ;
	}
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".                     Contact list                    ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	std::cout << ".     ___________________________________________     ." << std::endl;
	std::cout << ".     | Index  |First Name|Last  name| Nickname |     ." << std::endl;
	for (int i = 1; i < 9; i++)
	this->Contacts[i].printData();
	std::cout << ".     |________|__________|__________|__________|     ." << std::endl;
	std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
	this->selectContact();
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


// select contact to view full info
// check index via c atoi

void PhoneBook::selectContact()
{
	std::string cmd;
	int id;
	const char *cCmd;

	std::cout << "select index" << std::endl;
	std::getline(std::cin, cmd);
	cCmd = cmd.c_str();
	id = atoi(cCmd);
	if (id > this->totalContacts || id == 0) {
		std::cout << "bad index!" << std::endl;
		return ;
	}
	else
		this->Contacts[id].printFullData();
}
