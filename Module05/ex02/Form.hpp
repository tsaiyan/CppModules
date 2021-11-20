//
//  Form.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Form_hpp
#define Form_hpp

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {

private:

	std::string name;
	int gradeToSign;
	int gradeToExecute;
    bool sign;
    Form();
    void myPrint(std::string);

public:
    
    // MARK: -  Methods

	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &executor) = 0;

	// MARK: -  Getters

    int getGradeToSign() const;
	int getGradeToExecute() const;
	std::string getName() const;
    bool itSigned() const;
	std::string getTarget() const;

    // MARK: -  Exceptions

    class GradeTooHighException: public std::exception {
    public:
        const char* what() const throw();
    };
    
    class GradeTooLowException: public std::exception {
    public:
        const char* what() const throw();
    };
	
	class FormNotSignedException: public std::exception {
	public:
		const char* what() const throw();
	};

    // MARK: -  Ortodox
	Form(std::string name, int gradeToSign, int gradeToExecute);
    virtual ~Form();
    Form& operator=(const Form &other);
    Form(const Form &other);
};

std::ostream &operator<<(std::ostream &out, const Form &ref);

#endif /* Form_hpp */
