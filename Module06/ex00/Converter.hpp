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

#ifndef Converter_hpp
#define Converter_hpp

#include <iostream>

class Converter {

private:
    std::string literal;
	void myPrint(std::string);
    Converter();
	bool isNan(std::string value);
public:
	
	// MARK: -  Methods
    
    void runTests();
    void runConverter();
	float convertToFloat(std::string literal);
	double convertToDouble(std::string literal);
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
