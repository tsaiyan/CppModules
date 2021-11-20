//
//  Intern.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//



#ifndef Intern_hpp
#define Intern_hpp

#include <iostream>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern {

private:

    unsigned long getIndexForm(std::string form);
	void myPrint(std::string);

public:
	
	// MARK: -  Methods
    Form *makeForm(const std::string &name, const std::string &target);

	// MARK: -  Exceptions
    class unknownFormNameException: public std::exception {
    public:

        const char* what() const throw();
    };
	// MARK: -  Ortodox
    Intern();
	virtual ~Intern();
	Intern& operator=(const Intern &other);
	Intern(const Intern &other);
};

std::ostream &operator<<(std::ostream &out, const Intern &ref);

#endif /* Intern_hpp */
