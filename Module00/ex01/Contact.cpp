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

#include "Contact.hpp"
#include <iomanip>
// check for empty contact
// if it empty - the contact will not be added and error puts

bool	Contact::CheckEmpty(struct ContactData Contact)
{
	bool notEmpty;

	notEmpty = false;
	if (!Contact.FirstName.empty())
		notEmpty = true;
	else if (!Contact.lastName.empty())
		notEmpty = true;
	else if (!Contact.NickName.empty())
		notEmpty = true;
	else if (!Contact.PhoneNumber.empty())
		notEmpty = true;
	else if (!Contact.DarkestSecret.empty())
		notEmpty = true;
	if (notEmpty)
		return (true);
	return (false);
	
}

// adding new contact to struct
// check empty
// ++ total index
//  deleted oldest if contacts > 8

void Contact::newContact()
{
	int id = 0;

	id = this->idContact;
	if (this->deleteContact)
		std::cout << id << " contact will be deleted."  << std::endl;
	std::cout << "Enter a first name"  << std::endl;
	std::getline(std::cin, this->ContactData[id].FirstName);
	std::cout << "Enter a second name"  << std::endl;
	std::getline(std::cin, this->ContactData[id].lastName);
	std::cout << "Enter a nickname"  << std::endl;
	std::getline(std::cin, this->ContactData[id].NickName);
	std::cout << "Enter a phone number"  << std::endl;
	std::getline(std::cin, this->ContactData[id].PhoneNumber);
	std::cout << "Enter a darkest secret"  << std::endl;
	std::getline(std::cin, this->ContactData[id].DarkestSecret);
	if (this->CheckEmpty(this->ContactData[id]))
	{
		std::cout << "Contact with number " << this->idContact << " added successfully"  << std::endl;
		this->idContact++;
		if (this->idContact == 9)
		{
			this->idContact = 1;
			this->deleteContact = true;
		}
		if (this->totalContacts < 9)
			this->totalContacts++;
	}
	else
			std::cout << "Empty contact can't be added"  << std::endl;
}

void Contact::printContacts()
{
	for (int i = 1; i <= this->totalContacts; i++)
	{
		std::cout << ".     |       " << i  << "|";
		if (this->ContactData[i].FirstName.length() > 10)
			std::cout << this->ContactData[i].FirstName.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->ContactData[i].FirstName << "|";
		if (this->ContactData[i].FirstName.length() > 10)
			std::cout << this->ContactData[i].lastName.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->ContactData[i].lastName << "|";
		if (this->ContactData[i].FirstName.length() > 10)
			std::cout << this->ContactData[i].NickName.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->ContactData[i].NickName << "|" << "     .";
		std::cout << std::endl;
	}
}

void Contact::selectContact()
{
	std::string cmd;
	int id;

	std::cout << "select index" << std::endl;
	std::getline(std::cin, cmd);
	id = std::stoi(cmd);
	if (id > this->totalContacts)
		std::cout << "bad index!" << std::endl;
	std::cout << this->ContactData[id].FirstName << std::endl;
	std::cout << this->ContactData[id].lastName << std::endl;
	std::cout << this->ContactData[id].NickName << std::endl;
	std::cout << this->ContactData[id].DarkestSecret << std::endl;
}
