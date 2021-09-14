//
//  AMateria.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "AMateria.hpp"

#include <iostream>



// MARK: -  Methods

void AMateria::use(ICharacter &target) {
	(void)target;
	std::cout << "🔮 AMateria nothing to do with target." << std::endl;
}

std::string const & AMateria::getType(void) const{
	return type;
}

// MARK: -  Standart

AMateria::AMateria(std::string const & type) {
	std::cout << "🔮 AMateria created." << std::endl;
	this->type = type;
}

AMateria::AMateria() {
	this->type = "🔮 AMateria default type.";
	std::cout << "🔮 AMateria created." << std::endl;
};

AMateria::~AMateria() { std::cout << "🔮 AMateria destroyed." << std::endl; }

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "🔮 AMateria operator= called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::AMateria(const AMateria &other) {
	std::cout << "🔮 AMateria copyconst called." << std::endl;
	*this = other;
}
