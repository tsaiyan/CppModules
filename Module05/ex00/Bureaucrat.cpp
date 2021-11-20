//
//  Bureaucrat.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Bureaucrat.hpp"

	// MARK: -  Methods

void Bureaucrat::incrementGrade() {
	if (grade == 1) throw GradeTooHighException();
	grade--;
	std::cout << "🧙‍♂️ Bureaucrat " << name << " upgraded. New grade: " << grade << std::endl;
}

void Bureaucrat::decrementGrade() {

	if (grade == 150) throw GradeTooLowException();
	grade++;
	std::cout << "🧙‍♂️ Bureaucrat " << name << " downgraded. New grade: " << grade << std::endl;
}

	// MARK: -  Exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("🚨 Exception: grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("🚨 Exception: grade too low");
}

	// MARK: -  Getters

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

	// MARK: -  Ortodox

Bureaucrat::Bureaucrat() {
	myPrint("This constructor shouldn't be called");
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	if (grade > 150) throw GradeTooLowException();
	if (grade < 1) throw GradeTooHighException();
	this->name = name;
	this->grade = grade;
	std::cout << "🧙‍♂️ Bureaucrat "<< name << " with grade " << grade << " created." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "🧙‍♂️ Bureaucrat "<< name << " destroyed." << std::endl;
}

std::ostream &operator<< (std::ostream &stdOut, const Bureaucrat &bureaucrat) {
    stdOut << "🧙‍♂️ Bureaucrat " << bureaucrat.getName() << " has " << bureaucrat.getGrade() << " grade." << std::endl;
    return (stdOut);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &reffer) {
	if (this != &reffer) {
		grade = reffer.getGrade();
		name = reffer.getName();
	}
	return (*this);
}
	
Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
	myPrint("🧙‍♂️ Bureaucrat copied." );
}
	
void Bureaucrat::myPrint(std::string string) {
	std::cout << string << std::endl;
}

