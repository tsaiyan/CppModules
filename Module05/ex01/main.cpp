//
//  main.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//
#include <iostream>

void myPrint(std::string string) {
	std::cout << string << std:: endl;
}

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	//MARK: - ok case
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint(" ok case\n ");
	{
	Bureaucrat bureaucrat("Slon", 1);
	Form form("Credit", 10, 1);
	
	form.beSigned(bureaucrat);
	}
	//MARK: - bad case in Form
	
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint(" bad case in Form\n ");
	{
	Bureaucrat bureaucrat("Slon", 10);
	Form form("Credit", 1, 1);
	
		try {
			form.beSigned(bureaucrat);
		} catch (std::exception &exception) {
			   myPrint(exception.what());
		}
	}
	
	//MARK: - ok case in Bureaucrat
	
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint(" ok case in Bureaucrat\n ");
	{
	Bureaucrat bureaucrat("Slon", 1);
	Form form("Credit", 10, 1);
	
		try {
			bureaucrat.signForm(form);
		} catch (std::exception &exception) {
			   myPrint(exception.what());
		}
		
	}

	
	
	//MARK: - bad case in Bureaucrat
	
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("  bad case in Bureaucrat\n ");
	{
	Bureaucrat bureaucrat("Slon", 10);
	Form form("Credit", 1, 1);
	
		try {
			bureaucrat.signForm(form);
		} catch (std::exception &exception) {
			   myPrint(exception.what());
		}
	}
	
	//MARK: - test << form
	
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("   test << form  \n ");
	{
		Form form("Credit", 10, 1);
		Bureaucrat bureaucrat("Slon", 10);
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	
	//MARK: - test << bureaucrat
	
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("   test << bureaucrat  \n ");
	{
		Bureaucrat bureaucrat("Slon", 10);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	return 0;
}
