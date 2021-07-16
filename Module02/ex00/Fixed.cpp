//
//  Fixed.cpp
//  m2e0
//
//  Created by Torres Saiyan on 7/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Fixed.hpp"

//constructor

Fixed::Fixed() {
	this->pointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

// destructor

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Copy constructor

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->pointValue = other.getRawBits();
}

// Operand overload

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->pointValue = other.getRawBits();
	return (*this);
}

// getRawBits

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->pointValue);
}

//setRawBits

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->pointValue = raw;
}
