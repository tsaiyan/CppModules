//
//  PresidentialPardonForm.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include <fstream>
#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form {

private:

	std::string target;
    PresidentialPardonForm();
    void myPrint(std::string);

public:
    
    // MARK: -  Methods
	void execute(const Bureaucrat  &executor);

	// MARK: -  Getters
	std::string getTarget() const;
    // MARK: -  Exceptions
    class GradeTooHighException: public std::exception {
    public:
        const char* what() const throw();
    };
    
    class GradeTooLowException: public std::exception {
    public:
        const char* what() const throw();
    };
	
	class PresidentialPardonFormNotSignedException: public std::exception {
	public:
		const char* what() const throw();
	};

    // MARK: -  Ortodox
	PresidentialPardonForm(std::string name);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
    PresidentialPardonForm(const PresidentialPardonForm &other);
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &ref);

#endif /* PresidentialPardonForm_hpp */
