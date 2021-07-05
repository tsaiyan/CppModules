//
//  Contact.cpp
//  с++ learning
//
//  Created by Torres Saiyan on 7/5/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Contact.hpp"

// check for empty contact
// if it empty - the contact will not be added and error puts

bool	Contact::CheckEmpty(struct ContactData Contact)
{
	bool notEmpty;

	notEmpty = false;
	if (!Contact.FirstName.empty())
		notEmpty = true;
	else if (!Contact.SecondName.empty())
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
// переполнение надо добавить

void Contact::newContact()
{
	int id = 0;

	id = this->idContact;
	if (this->deleteContact)
		std::cout << id << " contact will be deleted."  << std::endl;
	std::cout << "Enter a first name"  << std::endl;
	std::getline(std::cin, this->ContactData[id].FirstName);
	std::cout << "Enter a second name"  << std::endl;
	std::getline(std::cin, this->ContactData[id].SecondName);
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
	}
	else
			std::cout << "Empty contact can't be added"  << std::endl;
}
