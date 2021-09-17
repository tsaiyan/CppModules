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

void MateriaSource::learnMateria(AMateria *newMatria) {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == nullptr) {
			this->materias[i] = newMatria->clone();
			break;
		}
	}
}

AMateria*  MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] != nullptr && materias[i]->getType() == type) {
			return materias[i]->clone();
			break;
		}
	}
	std::cout << "No materias with name " << type << std::endl;
	return nullptr;
}


// MARK: -  Standart

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) { materias[i] = nullptr; }
	std::cout << "🧠 MateriaSource created." << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] != nullptr)
			delete this->materias[i];
	}
	std::cout << "🧠 MateriaSource destroyed." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	std::cout << "🧠 MateriaSource operator= called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->materias[i] != nullptr)
				delete this->materias[i];
			this->materias[i] = other.materias[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "🧠 MateriaSource copyconst called." << std::endl;
	*this = other;
	
}
