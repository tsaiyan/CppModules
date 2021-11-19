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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(int argc, const char * argv[]) {
	
	//MARK: - ok case tree
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint(" ok tree\n ");
	
	{
	Bureaucrat bureaucrat("bureaucrat", 10);
	ShrubberyCreationForm tree("file");
	tree.beSigned(bureaucrat);
	tree.execute(bureaucrat);
	}
	
	//MARK: - bad case tree
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint(" bad case tree\n ");
	{
	Bureaucrat bureaucrat("bureaucrat", 1);
	ShrubberyCreationForm tree("file");
	try {
		tree.execute(bureaucrat);
	} catch (std::exception &exception) {
			   myPrint(exception.what());
	}
	}
	
	//MARK: - ok case drill
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("ok case drill\n ");

	{
	Bureaucrat bureaucrat("Bad gay", 10);
	RobotomyRequestForm drill("Neighbour's wall");
	drill.beSigned(bureaucrat);
	drill.execute(bureaucrat);
	}

	//MARK: - bad case president
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("bad case president\n ");
	
	{
	Bureaucrat putin("Putin", 1);
	Bureaucrat medvedev("Medvedev", 30);
	PresidentialPardonForm presidentialPardonForm("Navalny");
		
	presidentialPardonForm.beSigned(putin);
	try {
		presidentialPardonForm.execute(medvedev);
	} catch (std::exception &exception) {
			   myPrint(exception.what());
	}

	}
	
	//MARK: - bad case president 2
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("bad case president 2\n ");
	
	{
	Bureaucrat putin("Putin", 1);
	Bureaucrat medvedev("Medvedev", 30);
	PresidentialPardonForm presidentialPardonForm("Navalny");
		
	presidentialPardonForm.beSigned(putin);
	medvedev.executeForm(presidentialPardonForm);

	}
}
