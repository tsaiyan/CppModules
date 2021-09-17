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
#include "ICharacter.hpp"

// MARK: -  Methods

void Cure::use(ICharacter &target) {
		std::cout <<  "❄️ Ice: \"* heals "<< target.getName() << "’s wounds *\"" << std::endl;
}

AMateria *Cure::clone(void) const {
	return new Cure();
}

// MARK: -  Standart


Cure::Cure() {
	this->type = "cure";
	std::cout << "🍃 Cure created." << std::endl;
}

Cure::~Cure() {
	std::cout << "🍃 Cure destroyed." << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	std::cout << "🍃 Cure operator= called." << std::endl;
	AMateria::operator=(other);
	return (*this);
}

Cure::Cure(const Cure &other) {
	std::cout << "🍃 Cure copyconst called." << std::endl;
	*this = other;
	
}
