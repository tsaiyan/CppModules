//
//  MateriaSource.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "MateriaSource.hpp"

#include "AMateria.hpp"

// MARK: -  Interface methods

void MateriaSource::learnMateria(AMateria *) {
	
}

AMateria*  MateriaSource::createMateria(std::string const & type) {
	
}


// MARK: -  Standart

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource created." << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destroyed." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	std::cout << "MateriaSource operator= called." << std::endl;
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "MateriaSource copyconst called." << std::endl;
	*this = other;
	
}
