//
//  ClapTrap.cpp
//  m3e0
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	std::cout << "default constructor called." << std::endl;
	
	attackDamage = 0;
}

//MARK: - Methonds

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "ClapTrap with name \"" << this->name << "\" damaged for " << amount << " hp!" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	
	std::cout << "ClapTrap " << this->name << " attacks "<< target <<
	", causing "<< this->attackDamage <<" points of damage!" << std::endl;
} 

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap with name \"" << this->name << "\" repaired for " << amount << " hp!" << std::endl;
}

	//MARK: - Defaults

ClapTrap::ClapTrap() {
	this->name = "Trans";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "default constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}
