//
//  Animal.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "Animal.hpp"

// MARK: Methonds

void Animal::makeSound() const  { std::cout << "🐾 Animal: something on animal's" << std::endl; }

std::string Animal::getType() const  { return this->type; }

void Animal::addIdeaToBrain(std::string idea) {
	if (this->brain) {
		this->brain->addIdea(idea);
	}
}

std::string Animal::getIdea(int i) {
	if (this->brain) {
		return (this->brain->getIdea(i));
	} else {
		return ("no ideas");
	}
}

// MARK: Standart

Animal::Animal() {
	std::cout << "🐾 Animal created." << std::endl;
	this->brain = nullptr;
	this->type = "";
};

Animal::Animal(std:: string type) {
	std::cout << "🐾 Animal created." << std::endl;
	this->brain = nullptr;
	this->type = type;
};

Animal::~Animal() { std::cout << "🐾 Animal destroyed." << std::endl; }

Animal &Animal::operator=(const Animal &other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::Animal(const Animal &other) { *this = other; }
