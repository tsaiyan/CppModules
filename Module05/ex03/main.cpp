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
#include "Intern.hpp"

int main() {
    Intern  someRandomIntern;
    Form*   rrf;
    //MARK: - subject case
        myPrint(" - - - - - - - - - - - - - - -- ");
        myPrint("subject case\n ");
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    

    //MARK: - wrong name form case
        myPrint(" - - - - - - - - - - - - - - -- ");
        myPrint("wrong name form case\n ");
    try {
        rrf = someRandomIntern.makeForm("something request", "NoOne");
    } catch (std::exception &exception) {
        myPrint(exception.what());
    }
    
    //MARK: - good cases
        myPrint(" - - - - - - - - - - - - - - -- ");
        myPrint("good cases\n ");
    Form*   test;
    test = someRandomIntern.makeForm("presidential pardon", "Navalny");
    //delete(test);
    test = someRandomIntern.makeForm("shrubbery creation", "Navalny");
    //delete(test);
    //delete (rrf);
}
