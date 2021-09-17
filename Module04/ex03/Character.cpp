//
//  Character.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Character.hpp"
#include "AMateria.hpp"

// MARK: -  Interface

const std::string &Character::getName() const { return this->name; }

void Character::equip(AMateria* m) {
	if (m == nullptr) { return; }
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == nullptr) {
			this->materias[i] = m;
			std::cout << "Materia equipped." << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 3) {
		materias[idx] = nullptr;
		std::cout << "Materia unquipped." << std::endl;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 3 && materias[idx] != nullptr) {
		materias[idx]->use(target);
	}
}


// MARK: -  Standart

Character::Character(std::string name) {
	for (int i = 0; i < 4; i++) {materias[i] = nullptr;}
	std::cout << "🧙‍♂️ Character with name "<< name << " created." << std::endl;
	this->name = name;
}

Character::Character() {
	for (int i = 0; i < 4; i++) { materias[i] = nullptr; }
	std::cout << "🧙‍♂️ Character created." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (materias[i] != nullptr)
			delete materias[i];
	}
	std::cout << "🧙‍♂️ Character destroyed." << std::endl;
}

Character &Character::operator=(const Character &other) {
	std::cout << "🧙‍♂️ Character operator= called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->materias[i] != nullptr)
				delete this->materias[i];
			if (other.materias[i] != nullptr)
				this->materias[i] = other.materias[i]->clone();
		}
	}
	return (*this);
}

Character::Character(const Character &other) {
	std::cout << "🧙‍♂️ Character copyconst called." << std::endl;
	*this = other;
}
 
