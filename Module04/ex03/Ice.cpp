//
//  Ice.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

void Ice::use(ICharacter &target) {
	std::cout <<  "❄️ Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}

// MARK: -  Standart

AMateria *Ice::clone(void) const {
	return new Ice();
}

Ice::Ice() {
	this->type = "ice";
	std::cout << "❄️ Ice created." << std::endl;
}

Ice::~Ice() {
	std::cout << "❄️ Ice destroyed." << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	std::cout << "❄️ Ice operator= called." << std::endl;
	AMateria::operator=(other);
	return (*this);
}

Ice::Ice(const Ice &other) {
	std::cout << "❄️ Ice copyconst called." << std::endl;
	*this = other;
	
}
