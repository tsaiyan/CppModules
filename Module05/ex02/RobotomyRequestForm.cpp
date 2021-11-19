//
//  RobotomyRequestForm.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "RobotomyRequestForm.hpp"

	// MARK: -  Methods

void RobotomyRequestForm::execute(const Bureaucrat &executor) {
	Form::execute(executor);
	std::srand(time(0));
	if (std::rand() % 2) {
		std::cout << target << " drilled successfully! 🏋️‍♂️🏋️‍♂️🏋️‍♂️" << std::endl;
	} else {
		std::cout << target << " is not drilled! ))) 🥊🥊🥊 " << std::endl;
	}
}
	// MARK: - Getters
std::string RobotomyRequestForm::getTarget() const {
	return this->target;
}

	// MARK: -  Exceptions

const char *RobotomyRequestForm::GradeTooHighException::what() const throw() {
    return ("🚨 Exception: grade too high!");
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw() {
    return ("🚨 Exception: grade too low!");
}

const char *RobotomyRequestForm::RobotomyRequestFormNotSignedException::what() const throw() {
    return ("🚨 Exception not signed!");
}


	// MARK: -  Ortodox

// MARK: Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
	std::cout << "🤖 RobotomyRequestForm created." << std::endl;
}

// MARK: Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "🤖 RobotomyRequestForm destroyed." << std::endl;
}

// MARK: <<
std::ostream &operator<< (std::ostream &stdOut, const RobotomyRequestForm &RobotomyRequestForm) {
	std::string sign = "";
	if (RobotomyRequestForm.itSigned()) {
		sign = " signed.";
	} else {
		sign = " not signed.";
	}
   	stdOut << "🤖 RobotomyRequestForm " << RobotomyRequestForm.getName() << " with grade to sign "<< RobotomyRequestForm.getGradeToSign() << " and grade to execute " << RobotomyRequestForm.getGradeToExecute() << sign;
    return (stdOut);
}

// MARK: =
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &reffer) {
	if (this == &reffer)
		return (*this);
	this->target = reffer.target;
	myPrint("🤖 RobotomyRequestForm operator= called." );
	return (*this);
}

// MARK: Copy
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy) {
	*this = copy;
	myPrint("🤖 RobotomyRequestForm copied." );
}

// MARK: Utilites
void RobotomyRequestForm::myPrint(std::string string) {
	std::cout << string << std::endl;
}

