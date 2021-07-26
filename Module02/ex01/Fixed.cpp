//
//  Fixed.cpp
//  m2e0
//
//  Created by Torres Saiyan on 7/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Fixed.hpp"


/* CONSTRUCTORS */

//standart
Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

//int
Fixed::Fixed(int const value) {
	this->value = value << this->fractBits;
	std::cout << "Int constructor called" << std::endl;
}

//float
Fixed::Fixed(float const value) {
	this->value = (int)roundf(value * (1 << this->fractBits));
	std::cout << "Float constructor called" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

/* DESTRUCTOR */

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* OPERAND OVERLOAD */
Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

/* METHODS */

// getRawBits
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

//setRawBits
void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float::	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fractBits));
}

/*
That converts the fixed point value
to an integer value.
*/

/*EXAMPLE*/
/* num = 316015
** val = 316015  >> 8)  (offset = 8) == 316015 /  2 ^ 8
** _val = 1234
*/

int::	Fixed::toInt(void) const
{
	return (this->value >> this->fractBits);
}

std::ostream& operator<< (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

const int Fixed::fractBits = 8;
