//
//  ShrubberyCreationForm.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "ShrubberyCreationForm.hpp"

	// MARK: -  Methods

void ShrubberyCreationForm::execute(const Bureaucrat &executor) {
	Form::execute(executor);
	std::ofstream out(target + "_shrubbery");
	if (out.is_open())
	{
			out << "\n"
				 "             🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "            🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "           🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄_\n"
				 "         🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "       🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "      🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "      🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "      🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "       🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "         🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "          🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "           🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄\n"
				 "                   🌴🌴🌴🌴\n"
				 "                   🌴🌴🌴🌴\n"
				 "                   🌴🌴🌴🌴\n"
				 "                   🌴🌴🌴🌴\n"
				 "        🍂🍂🍂🍂🍂🍂🍂🍂🍂🍂🍂🍂🍂🍂\n" << std::endl;
		out.close();
	}
}

	// MARK: - Getters
std::string ShrubberyCreationForm::getTarget() const {
	return this->target;
}

	// MARK: -  Exceptions

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw() {
    return ("🚨 Exception: grade too high!");
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw() {
    return ("🚨 Exception: grade too low!");
}

const char *ShrubberyCreationForm::ShrubberyCreationFormNotSignedException::what() const throw() {
    return ("🚨 Exception not signed!");
}


	// MARK: -  Ortodox

// MARK: Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137) {
	this->target = target;
	std::cout << "🌳 ShrubberyCreationForm created." << std::endl;
}

// MARK: Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "🌳 ShrubberyCreationForm destroyed." << std::endl;
}

// MARK: <<
std::ostream &operator<< (std::ostream &stdOut, const ShrubberyCreationForm &ShrubberyCreationForm) {
	std::string sign = "";
	if (ShrubberyCreationForm.itSigned()) {
		sign = " signed.";
	} else {
		sign = " not signed.";
	}
   	stdOut << "🌳 ShrubberyCreationForm " << ShrubberyCreationForm.getName() << " with grade to sign "<< ShrubberyCreationForm.getGradeToSign() << " and grade to execute " << ShrubberyCreationForm.getGradeToExecute() << sign;
    return (stdOut);
}

// MARK: =
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &reffer) {
	if (this == &reffer)
		return (*this);
		myPrint("🌳 ShrubberyCreationForm operator= called." );
	this->target = reffer.target;
	return (*this);
}

// MARK: Copy
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy) {
	*this = copy;
	myPrint("🌳 ShrubberyCreationForm copied." );
}

// MARK: Utilites
void ShrubberyCreationForm::myPrint(std::string string) {
	std::cout << string << std::endl;
}

