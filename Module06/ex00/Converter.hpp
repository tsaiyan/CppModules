//
//  Converter.hpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Converter_hpp
#define Converter_hpp

#include <iostream>

class Converter {

private:
    std::string literal;
	void myPrint(std::string);
    Converter();
public:
	
	// MARK: -  Methods
    
    void runTests();
    void runConverter();
    char convertToChar(std::string literal);
    int convertToInt(std::string literal);
    
	// MARK: -  Exceptions
    
    class ConverterException: public std::exception
    {
        private:
                std::string errorMessage;
        public:
                ConverterException(const std::string &errorMessage);
                const char *what() const throw();
    };

	// MARK: -  Ortodox
	Converter(std::string literal);
	virtual ~Converter();
	Converter& operator=(const Converter &other);
	Converter(const Converter &other);
};

std::ostream &operator<<(std::ostream &out, const Converter &ref);

#endif /* Converter_hpp */
