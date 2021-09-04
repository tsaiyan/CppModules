//
//  Cat.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "Cat.hpp"

// MARK: Methonds

void Cat::makeSound() const { std::cout << "🐱 Cat: meow )))))." << std::endl; }

// MARK: Standart

Cat::Cat() {
	std::cout << "🐱 Cat created." << std::endl;
	this->type = "cat";
	
};

Cat::~Cat() { std::cout << "🐱 Cat destroyed." << std::endl; }

Cat &Cat::operator=(const Cat &other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::Cat(const Cat &other) { *this = other; }

