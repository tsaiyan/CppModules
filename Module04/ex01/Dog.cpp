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
	this->type = "Dog";
	this->brain = new Brain();
		std::cout << "🐶 Dog created." << std::endl;
};

Dog::~Dog() {
	delete this->brain;
	std::cout << "🐶 Dog destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
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

Dog::Dog(const Dog &other) { *this = other; }
