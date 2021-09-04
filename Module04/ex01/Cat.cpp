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
	this->type = "cat";
	this->brain = new Brain();
	std::cout << "🐱 Cat created." << std::endl;
	
};

Cat::~Cat() {
	delete this->brain;
	std::cout << "🐱 Cat destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	delete this->brain;
	if (this != &other) {
		this->type = other.type;
		this->brain = new Brain();
		for (int i = 0; i < 100; i++) {
			this->brain->addIdea(other.brain->getIdea(i));
		}
	}
	std::cout << "operator= called." << std::endl;
	return (*this);
}
Cat::Cat(const Cat &other) { *this = other; }

