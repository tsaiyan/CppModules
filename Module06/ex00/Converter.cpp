/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:30:11 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/11/22 20:30:13 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <limits>
#include <sstream>

	// MARK: -  Methods

bool Converter::isNan(std::string value) {
	if (value == "nan" || value == "inf" \
		|| value == "-nan"|| value == "+nan" \
		|| value == "+inf"|| value == "-inf" \
		|| value == "-nan"|| value == "nanf" \
		|| value == "-nanf" || value == "+nanf") {
		return true;
	}
	return false;
}

void Converter::runConverter() {
    
	std::ostringstream converter;

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

    std::cout << "float: " ;
    try {
		float result = convertToFloat(literal);
        std::cout << convertToFloat(literal);
		converter << result;
		std::string convertedFloatToString(converter.str());
		if (convertedFloatToString.find('.') == convertedFloatToString.npos && !isNan(literal)) {
			std::cout << ".0";
		}
		std::cout << "f" << std::endl;
    } catch(...) {
        std::cout << "impossible" << std::endl;
    }

    std::cout << "double: " ;
    try {
		double result = convertToDouble(literal);
        std::cout << convertToDouble(literal);
		converter << result;
		std::string convertedDoubletToString(converter.str());
		if (convertedDoubletToString.find('.') == convertedDoubletToString.npos && !isNan(literal)) {
			std::cout << ".0";
		}
		std::cout << std::endl;
    } catch(...) {
        std::cout << "impossible" << std::endl;
    }

}

// MARK: toDouble
double Converter::convertToDouble(std::string literal) {
	if (literal.length() == 1 && isalnum(literal[0]) && !isdigit(literal[0])) {
		return static_cast<double>(literal[0]);
	}
	return static_cast<double>(std::stod(literal));
}

// MARK: toFloat
float Converter::convertToFloat(std::string literal) {
	if (literal.length() == 1 && isalnum(literal[0]) && !isdigit(literal[0])) {
		return static_cast<float>(literal[0]);
	}
	return static_cast<float>(std::stof(literal));

}

// MARK: toChar
char Converter::convertToChar(std::string literal) {

    if (literal.length() == 1 && isdigit(literal[0])) {
        throw ConverterException("Non displayable") ;
    } else if (literal.length() == 1) {
        return literal[0];
    }

	int charToInt = 0;
	try {
		charToInt = std::stoi(literal);
	} catch(...) {
		throw ConverterException("impossible");
	}
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

	// MARK: - DOUBLE TESTS

	if (convertToDouble("33.3") != (double)33.3) throw -32;
	if (convertToDouble("99999") != (double)99999) throw -32;
	if (convertToDouble("a") != (double)97) throw -32;
	if (convertToDouble("0") != (double)0) throw -32;
	if (convertToDouble("1") != (double)1) throw -32;
	if (convertToDouble("-1") != (double)-1) throw -32;
	if (convertToDouble("1.79769313486232") != (double)1.79769313486232) throw -32;
	if (convertToDouble("-1.79769313486232") != (double)-1.79769313486232) throw -32;
	exception = false;
	   try {
	if (convertToDouble("sdfsdfdsfdsf") != (double)-1.0001) throw -32;
	   } catch(...) {
		   exception = true;
	   }
	 if (exception == false) throw -42;
		myPrint("Unit-tests for float ✅.");

	// MARK: - FLOAT TESTS
	

	if (convertToFloat("33.3") != (float)33.3) throw -32;
	if (convertToFloat("99999") != (float)99999) throw -32;
	if (convertToFloat("a") != (float)97) throw -32;
	if (convertToFloat("0") != (float)0) throw -32;
	if (convertToFloat("1") != (float)1) throw -32;
	if (convertToFloat("-1") != (float)-1) throw -32;
	if (convertToFloat("-1.0001") != (float)-1.0001) throw -32;
	exception = false;
	   try {
	if (convertToFloat("sdfsdfdsfdsf") != (float)-1.0001) throw -32;
	   } catch(...) {
		   exception = true;
	   }
	 if (exception == false) throw -42;
		myPrint("Unit-tests for float ✅.");
	myPrint("Unit-tests for double ✅.");

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
   myPrint("Unit-tests for int ✅.");
    

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

  myPrint("Unit-tests for char ✅.");
    
    
    
    myPrint("- - - - - - - - - - - - - - -");
}
