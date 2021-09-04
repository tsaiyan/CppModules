//
//  WrongAnimal.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "WrongAnimal.hpp"

#include "Cat.hpp"

// MARK: Methonds

void WrongAnimal::makeSound() const { std::cout << "🐲 WrongAnimal: tikay s gorodu)))" << std::endl; }

std::string WrongAnimal::getType() const  { return this->type; }

// MARK: Standart

WrongAnimal::WrongAnimal() {
	std::cout << "🐲 WrongAnimal created." << std::endl;
	this->type = "WrongAnimal";
	
};

WrongAnimal::~WrongAnimal() { std::cout << "🐲 WrongAnimal destroyed." << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) { *this = other; }

