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

int main() {

	// create 0 grade
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("create 0 grade: \n");
	try {
		   Bureaucrat slotn("name", 0);
	}
	   catch(std::exception &exception) {
		   myPrint(exception.what());
	}
	// create 151 grade
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("create 151 grade: \n");
	try {
		   Bureaucrat slotn("Slotn", 151);
	}
	   catch(std::exception &exception) {
		   myPrint(exception.what());
	}

	// create -1 grade
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("create -1 grade: \n");
	try {
		   Bureaucrat slotn("Slotn", -1);
	}
	   catch(std::exception &exception) {
		   myPrint(exception.what());
	}


	// increase bad grade
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("increase bad grade: \n");
{
	 Bureaucrat slotn("Slotn", 1);
	try {
		slotn.incrementGrade();
	} catch (std:: exception &exception) {
		 myPrint(exception.what());
	}
}
	// decrease bad grade
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("decrease bad grade: \n");
{
	 Bureaucrat slotn("Slotn", 150);
	try {
		slotn.decrementGrade();
	} catch (std:: exception &exception) {
		 myPrint(exception.what());
	}
}
	// all ok
	myPrint(" - - - - - - - - - - - - - - -- ");
	myPrint("all ok: \n");
{
	 Bureaucrat slotn("Slotn", 2);
	try {
		slotn.decrementGrade();
	} catch (std:: exception &exception) {
		 myPrint(exception.what());
	}
	try {
		slotn.incrementGrade();
	} catch (std:: exception &exception) {
		 myPrint(exception.what());
	}
}
	
	
	
	return 0;
}
