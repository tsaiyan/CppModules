//
//  Form.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "Form.hpp"

	// MARK: -  Methods

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (gradeToSign < bureaucrat.getGrade()) throw GradeTooLowException();
	std::cout << "📝 Form " << name << " signed by " << bureaucrat.getName() << std::endl;
	this->sign = true;
}
	// MARK: -  Exceptions

const char *Form::GradeTooHighException::what() const throw() {
    return ("🚨 Exception: grade too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("🚨 Exception: grade too low");
}

	// MARK: -  Getters

int Form::getGradeToSign() const {
	return gradeToSign;
}

int Form::getGradeToExecute() const {
	return gradeToExecute;
}

bool Form::itSigned() const {
	return sign;
}

std::string Form::getName() const {
	return this->name;
}

	// MARK: -  Ortodox

Form::Form() {
	myPrint("This constructor shouldn't be called");
}

// MARK: Constructor
Form::Form(std::string name, int gradeToSign, int gradeToExecute) {
	if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
	this->gradeToSign = gradeToSign;
	this->gradeToExecute = gradeToExecute;
	this->name = name;
	this->sign = false;
	std::cout << "📝 Form " << name << " with grade to sign "<< gradeToSign << " and grade to execute " << gradeToExecute << " created." << std::endl;
}

// MARK: Destructor
Form::~Form() {
	std::cout << "📝 Form destroyed." << std::endl;
}

// MARK: <<
std::ostream &operator<< (std::ostream &stdOut, const Form &form) {
	std::string sign = "";
	if (form.itSigned()) {
		sign = " signed.";
	} else {
		sign = " not signed.";
	}
   	stdOut << "📝 Form " << form.getName() << " with grade to sign "<< form.getGradeToSign() << " and grade to execute " << form.getGradeToExecute() << sign;
    return (stdOut);
}

// MARK: =
Form &Form::operator=(const Form &reffer) {
	if (this != &reffer) {
		gradeToSign = reffer.getGradeToSign();
		gradeToExecute = reffer.getGradeToExecute();
		name = reffer.getName();
	}
	return (*this);
}

// MARK: Copy
Form::Form(const Form &copy) {
	*this = copy;
	myPrint("📝 Form copied." );
}

// MARK: Utilites
void Form::myPrint(std::string string) {
	std::cout << string << std::endl;
}

