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

Contact::Contact() {
	this->idContact = 1;
}

bool	Contact::ContactIsEmpty(void) {
	bool	Empty;

	Empty = true;
	if (!this->firstName.empty())
		Empty = false;
	else if (!this->lastName.empty())
		Empty = false;
	else if (!this->nickName.empty())
		Empty = false;
	else if (!this->phoneNumber.empty())
		Empty = false;
	else if (!this->darkestSecret.empty())
		Empty = false;
	if (Empty)
		return (true);
	return (false);
	
}

// adding new contact to struct
// check empty
// ++ total index
//  deleted oldest if contacts > 8

void	Contact::newContact() {
	std::cout << std::endl;
	std::cout << "Enter a first name"  << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Enter a second name"  << std::endl;
	std::getline(std::cin, this->lastName);
	std::cout << "Enter a nickname"  << std::endl;
	std::getline(std::cin, this->nickName);
	std::cout << "Enter a phone number"  << std::endl;
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Enter a darkest secret"  << std::endl;
	std::getline(std::cin, this->darkestSecret);
}

// printf then SEARCH called

void	Contact::printData() {
	if (this->ContactIsEmpty())
		return ;
	std::cout << ".     |       " << this->idContact  << "|";
	if (this->firstName.length() > 10)
		std::cout << this->firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->firstName << "|";
	if (this->firstName.length() > 10)
		std::cout << this->lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->lastName << "|";
	if (this->firstName.length() > 10)
		std::cout << this->nickName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickName << "|" << "     .";
	std::cout << std::endl;
}

// print when select called

void	Contact::printFullData()
{
	std::cout << std::endl;
	std::cout << "First name: ";
	std::cout << this->firstName << std::endl;
	std::cout << "Last name: ";
	std::cout << this->lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->nickName << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->darkestSecret << std::endl;
	std::cout << std::endl;
}

// set id then init

void	Contact::setId(int id) {
	this->idContact = id;
}
