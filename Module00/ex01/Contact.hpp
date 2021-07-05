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
		std::string	lastName;
		std::string	NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	} ;
	
	ContactData ContactData[9];
	int			totalContacts = 0;
	int			idContact = 1;
	bool		deleteContact = false;
	bool		CheckEmpty(struct ContactData Contact);
	

public:
	
	void		newContact();
	void		printContacts();
	void		selectContact();
} ;


#endif /* Contact_hpp */
