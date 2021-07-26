//
//  Fixed.cpp
//  m2e0
//
//  Created by Torres Saiyan on 7/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Fixed.hpp"


// MARK: - CONSTRUCTORS

// standart
Fixed::Fixed() {
	this->value = 0;
//	std::cout << "Default constructor called" << std::endl;
}

// int
Fixed::Fixed(int const value) {
	this->value = value << this->fractBits;
//	std::cout << "Int constructor called" << std::endl;
}

// float
Fixed::Fixed(float const value) {
	this->value = (int)roundf(value * (1 << this->fractBits));
//	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor

Fixed::Fixed(const Fixed &other) {
//	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

// MARK: - DESTRUCTOR

Fixed::~Fixed() {
// std::cout << "Destructor called" << std::endl;
}

// MARK: - METHODS

// getRawBits
int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

//setRawBits
void Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

// toFloat
float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fractBits));
}

// toInt
int Fixed::toInt(void) const
{
	return (this->value >> this->fractBits);
}

// min
Fixed Fixed::min(const Fixed &first, const Fixed &second) {
	return (first > second ? second : first);
}

// max

Fixed Fixed::max(const Fixed &first, const Fixed &second) {
	return (first > second ? first : second);
}
// MARK: - OPERAND OVERLOADS

// '='
Fixed& Fixed::operator=(const Fixed &other) {
//	std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

// '+'
Fixed Fixed::operator+(const Fixed &other) {
	Fixed New;

	New.setRawBits(this->getRawBits() + other.getRawBits());
	return (New);
}

// '-'
Fixed Fixed::operator-(const Fixed &other) {
	Fixed New;

	New.setRawBits(this->getRawBits() - other.getRawBits());
	return (New);
}

// '/'
Fixed Fixed::operator/(const Fixed &other) {
	return (Fixed(this->toFloat() / other.toFloat()));
}

// '*'
Fixed Fixed::operator*(const Fixed &other) {
	Fixed New(*this);

	New.setRawBits(this->getRawBits() * other.getRawBits() / (1 << Fixed::fractBits));
	return (New);
}

// '>'
bool Fixed::operator>(const Fixed &other) const {
		return (this->getRawBits() > other.getRawBits());
}

// '<'
bool Fixed::operator<(const Fixed &other) const {
		return (this->getRawBits() < other.getRawBits());
}

// '=='
bool Fixed::operator==(const Fixed &other) const {
		return (this->getRawBits() == other.getRawBits());
}

// '!='
bool Fixed::operator!=(const Fixed &other) const {
		return (this->getRawBits() != other.getRawBits());
}

// '>='
bool Fixed::operator>=(const Fixed &other) const {
		return (this->getRawBits() >= other.getRawBits());
}

// '<='
bool Fixed::operator<=(const Fixed &other) const {
		return (this->getRawBits() <= other.getRawBits());
}

// '++' pre

Fixed Fixed::operator++() {
	float inc = this->toFloat() + 1;

	this->value = (int)roundf(inc * (1 << this->fractBits));
	return (*this);
}

// '--' pre

Fixed Fixed::operator--() {
	float inc = this->toFloat() - 1;

	this->value = (int)roundf(inc * (1 << this->fractBits));
	return (*this);
}

// '++' post

Fixed Fixed::operator++(int) {
	Fixed Temp(*this);
	
	operator++();
	return (Temp);
}

// '--' post

Fixed Fixed::operator--(int) {
	Fixed Temp(*this);
	
	operator--();
	return (Temp);
}

// MARK: - ADDITIONAL

std::ostream& operator<< (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

const int Fixed::fractBits = 8;
