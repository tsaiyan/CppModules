//
//  RobotomyRequestForm.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include <fstream>
#include <iostream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm: public Form {

private:

	std::string target;
    RobotomyRequestForm();
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
	
	class RobotomyRequestFormNotSignedException: public std::exception {
	public:
		const char* what() const throw();
	};

    // MARK: -  Ortodox

	RobotomyRequestForm(std::string name);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &ref);

#endif /* RobotomyRequestForm_hpp */
