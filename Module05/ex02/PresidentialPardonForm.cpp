//
//  PresidentialPardonForm.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "PresidentialPardonForm.hpp"

	// MARK: -  Methods

void PresidentialPardonForm::execute(const Bureaucrat &executor) {
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;

}
	// MARK: - Getters
std::string PresidentialPardonForm::getTarget() const {
	return this->target;
}

	// MARK: -  Exceptions

const char *PresidentialPardonForm::GradeTooHighException::what() const throw() {
    return ("🚨 Exception: grade too high!");
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw() {
    return ("🚨 Exception: grade too low!");
}

const char *PresidentialPardonForm::PresidentialPardonFormNotSignedException::what() const throw() {
    return ("🚨 Exception not signed!");
}


	// MARK: -  Ortodox

// MARK: Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
	this->target = target;
	std::cout << "🕶 PresidentialPardonForm created." << std::endl;
}

// MARK: Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "🕶 PresidentialPardonForm destroyed." << std::endl;
}

// MARK: <<
std::ostream &operator<< (std::ostream &stdOut, const PresidentialPardonForm &PresidentialPardonForm) {
	std::string sign = "";
	if (PresidentialPardonForm.itSigned()) {
		sign = " signed.";
	} else {
		sign = " not signed.";
	}
   	stdOut << "🕶 PresidentialPardonForm " << PresidentialPardonForm.getName() << " with grade to sign "<< PresidentialPardonForm.getGradeToSign() << " and grade to execute " << PresidentialPardonForm.getGradeToExecute() << sign;
    return (stdOut);
}

// MARK: =
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &reffer) {
	if (this == &reffer)
		return (*this);
	this->target = reffer.target;
	myPrint("🕶 PresidentialPardonForm operator= called." );
	return (*this);
}

// MARK: Copy
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy) {
	*this = copy;
	myPrint("🕶 PresidentialPardonForm copied." );
}

// MARK: Utilites
void PresidentialPardonForm::myPrint(std::string string) {
	std::cout << string << std::endl;
}

