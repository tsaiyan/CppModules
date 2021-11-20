//
//  Bureaucrat.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <iostream>

class Bureaucrat {

private:

	std::string name;
	int grade;
	Bureaucrat();
	void myPrint(std::string);

public:
	
	// MARK: -  Methods
	void incrementGrade();
	void decrementGrade();
	int getGrade() const;
	std::string getName() const;

	// MARK: -  Exceptions
	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};

	// MARK: -  Ortodox
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &other);
	Bureaucrat(const Bureaucrat &other);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref);

#endif /* Bureaucrat_hpp */
