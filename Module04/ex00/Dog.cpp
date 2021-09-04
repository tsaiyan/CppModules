//
//  Dog.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "Dog.hpp"

// MARK: Methonds

void Dog::makeSound() const  { std::cout << "🐶 Dog: gav gav!!" << std::endl; }

// MARK: Standart

Dog::Dog() {
	std::cout << "🐶 Dog created." << std::endl;
	this->type = "Dog";
	
};

Dog::~Dog() { std::cout << "🐶 Dog destroyed." << std::endl; }

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::Dog(const Dog &other) { *this = other; }
