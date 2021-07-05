//
//  PhoneBook.hpp
//  с++ learning
//
//  Created by Torres Saiyan on 7/5/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <stdio.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

private:
	Contact	Contacts;
public:
		
		void printIntro();
		void searchContact();
		void addContact();
};

#endif /* PhoneBook_hpp */
