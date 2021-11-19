//
//  ShrubberyCreationForm.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include <fstream>
#include <iostream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm: public Form {

private:

	std::string target;
    ShrubberyCreationForm();
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
	
	class ShrubberyCreationFormNotSignedException: public std::exception {
	public:
		const char* what() const throw();
	};

    // MARK: -  Ortodox
	ShrubberyCreationForm(std::string name);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &ref);

#endif /* ShrubberyCreationForm_hpp */
