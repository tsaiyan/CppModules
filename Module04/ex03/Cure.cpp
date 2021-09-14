//
//  Cure.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"



// MARK: -  Standart

AMateria *Cure::clone(void) const {
	AMateria *a = new Cure(*this);
	return (a);
}

Cure::Cure() {
	this->type = "Cure";
	std::cout << "🍃 Cure created." << std::endl;
}

Cure::~Cure() {
	std::cout << "🍃 Cure destroyed." << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	std::cout << "🍃 Cure operator= called." << std::endl;
	return (*this);
}

Cure::Cure(const Cure &other) {
	std::cout << "🍃 Cure copyconst called." << std::endl;
	*this = other;
	
}
