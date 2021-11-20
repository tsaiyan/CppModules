//
//  Intern.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Intern.hpp"

	// MARK: -  Methods
unsigned long Intern::getIndexForm(std::string formName) {
    std::string knownForms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
    for (unsigned long i = 0; i < sizeof(knownForms); i++) {
        if (formName == knownForms[i])
            return i;
    }
    throw unknownFormNameException();
}

Form    *Intern::makeForm(const std::string &formName, const std::string &target) {

    int formId = Intern::getIndexForm(formName);

    switch (formId) {
        case 0:
            std::cout << "👨‍⚕️Intern creates ";
            return new PresidentialPardonForm(target);
            break;
        case 1:
            std::cout << "👨‍⚕️Intern creates ";
            return new RobotomyRequestForm(target);
            break;
        case 2:
            std::cout << "👨‍⚕️Intern creates ";
            return new ShrubberyCreationForm(target);
            break;
        default:
            throw unknownFormNameException();
    }
}

	// MARK: -  Exceptions

const char *Intern::unknownFormNameException::what() const throw() {
    return ("🚨 Exception: unknown form!");
}

	// MARK: -  Ortodox

Intern::Intern() {
	myPrint("👨‍⚕️ Intern created.");
}


Intern::~Intern() {
	std::cout << "👨‍⚕️ Intern destroyed." << std::endl;
}

std::ostream &operator<< (std::ostream &stdOut, const Intern &Intern) {
    (void) Intern;
    stdOut << "👨‍⚕️ I'm intern!";
    return (stdOut);
}

Intern &Intern::operator=(const Intern &reffer) {
    (void)reffer;
	return (*this);
}
	
Intern::Intern(const Intern &copy) {
	*this = copy;
	myPrint("👨‍⚕️ Intern copied." );
}
	
void Intern::myPrint(std::string string) {
	std::cout << string << std::endl;
}

