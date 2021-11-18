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

class Form {

private:

    std::string name;
    int grade;
    Form();
    void myPrint(std::string);
public:
    
    // MARK: -  Methods
    void inrementGrade();
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
    Form(std::string name, int grade);
    virtual ~Form();
    Form& operator=(const Form &other);
    Form(const Form &other);
};

std::ostream &operator<<(std::ostream &out, const Form &ref);

#endif /* Form_hpp */
