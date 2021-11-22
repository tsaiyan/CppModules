//
//  Converter.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Converter.hpp"
#include <limits>

	// MARK: -  Methods




void Converter::runConverter() {
    
    std::cout << "char: " ;
    try {
        std::cout << convertToChar(literal) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    

    std::cout << "int: " ;
    try {
        std::cout << convertToInt(literal) << std::endl;
    } catch(...) {
        std::cout << "impossible" << std::endl;
    }
    

}

// MARK: toChar
char Converter::convertToChar(std::string literal) {

    if (literal.length() == 1 && isdigit(literal[0])) {
        throw ConverterException("Non displayable") ;
    } else if (literal.length() == 1) {
        return literal[0];
    }


    int charToInt = std::stoi(literal);
    if (charToInt > 31 && charToInt < 127)
        return static_cast<char>(charToInt);
    else if (charToInt >= 0 && charToInt < 32) {
        throw ConverterException("Non displayable") ;
    }
    throw ConverterException("impossible");

}

// MARK: toInt
int Converter::convertToInt(std::string literal) {
    
    // if char
    if (literal.length() == 1) {
        return static_cast<int>(literal[0]);
    }


        long checkLimits = std::stoi(literal);
        if (checkLimits < INT_MIN || checkLimits > INT_MAX) throw (-42);
        return static_cast<int>(checkLimits);

}

	// MARK: -  Exceptions

Converter::ConverterException::ConverterException(const std::string &errorMessage)
{
    this->errorMessage = errorMessage;
}
const char *Converter::ConverterException::what(void) const throw()
{
    return (errorMessage.c_str());
}

	// MARK: -  Getters



	// MARK: -  Ortodox

Converter::Converter() {
	myPrint("This constructor shouldn't be called");
}

Converter::Converter(std::string literal) {
    this->literal = literal;
}

Converter::~Converter() {

}

std::ostream &operator<< (std::ostream &stdOut, const Converter &Converter) {
    
    return (stdOut);
}

Converter &Converter::operator=(const Converter &reffer) {
	if (this != &reffer) {
		
	}
	return (*this);
}
	
Converter::Converter(const Converter &copy) {
	*this = copy;
}
	
void Converter::myPrint(std::string string) {
	std::cout << string << std::endl;
}

//MARK: - TESTS

void Converter::runTests() {
    bool exception = false;

    // MARK: - INT TESTS
    if (convertToInt("33") != 33) throw -42;
    if (convertToInt("999.99") != 999) throw -42;
    if (convertToInt("999.99999999") != 999) throw -42;
    if (convertToInt("999.00000009") != 999) throw -42;
    if (convertToInt("a") != 97) throw -42;
    
    //string
    try {
        convertToInt("aijejiogeirjgia");
    } catch(...) {
        exception = true;
    }
    if (exception == false) throw -42;
        
    // limits
    exception = false;
    try {
        convertToInt("99999999999999999999999999999999999");
    } catch(...) {
        exception = true;
    }
    if (exception == false) throw -42;
    myPrint("Int tests ok. ✅");
    

    // MARK: - CHAR TESTS
    if (convertToChar("a") != 'a') throw -42;
    if (convertToChar("33") != '!') throw -42;
    if (convertToChar("33.22222") != '!') throw -42;
    // limit
    exception = false;
    try {
        convertToChar("9999");
    } catch (...) {
        exception = true;
    }
    if (exception == false) throw -42;
    // unvisible 10
    exception = false;
    try {
        convertToChar("10");
    } catch (std::exception &e) {
        exception = true;
    }
    if (exception == false) throw -42;
    // unvisible 0
    exception = false;
    try {
        convertToChar("10");
    } catch (std::exception &e) {
        exception = true;
    }
    if (exception == false) throw -42;
    // -1
    exception = false;
    try {
        convertToChar("-1");
    } catch (std::exception &e) {
        exception = true;
    }
    if (exception == false) throw -42;

    myPrint("Char tests ok. ✅");
    
    
    
    myPrint("- - - - - - - - - - - - - - -");
}
