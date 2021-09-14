//
//  Character.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Character.hpp"


// MARK: -  Interface

std::string const & Character::getName() const { return this->name; }

void Character::equip(AMateria* m){
	if (m == nullptr) { return; }
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == nullptr) {
			this->materias[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 3) {
		materias[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 3) {
		materias[idx]->use(target);
	}
}


// MARK: -  Standart

Character::Character(std::string name) {
	std::cout << "🧙‍♂️ Character with name "<< name << " created." << std::endl;
	this->name = name;
}

Character::Character() {
	std::cout << "🧙‍♂️ Character created." << std::endl;
}

Character::~Character() {
	std::cout << "🧙‍♂️ Character destroyed." << std::endl;
}

Character &Character::operator=(const Character &other) {
	std::cout << "🧙‍♂️ Character operator= called." << std::endl;
	return (*this);
}

Character::Character(const Character &other) {
	std::cout << "🧙‍♂️ Character copyconst called." << std::endl;
	*this = other;
	
}
