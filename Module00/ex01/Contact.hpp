//
//  Contact.hpp
//  с++ learning
//
//  Created by Torres Saiyan on 7/5/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Contact_hpp
#define Contact_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

class	Contact {
	
private:
	struct	ContactData
	{
		std::string	FirstName;
		std::string	SecondName;
		std::string	NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	} ;
	
	ContactData ContactData[9];
	int			idContact = 1;
	bool		deleteContact = false;
	bool		CheckEmpty(struct ContactData Contact);
	

public:
	
	void		newContact();
} ;


#endif /* Contact_hpp */
