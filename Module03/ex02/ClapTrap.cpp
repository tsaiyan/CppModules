//
//  ClapTrap.cpp
//  m3e0
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "ClapTrap.hpp"

//MARK: - constructor

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "1️⃣ ClavTrap created." << std::endl;
}

//MARK: - methods

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
}

void ClapTrap::attack(std::string const &target) {
	
	std::cout << "1️⃣ ClapTrap " << this->name << " attacks "<< target <<
	", causing "<< this->attackDamage <<" points of damage!" << std::endl;
} 

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
}

std::string ClapTrap::getName() {
	return (this->name);
}
//MARK: - defaults

ClapTrap::ClapTrap() {
	this->name = "Human";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "1️⃣ ClapTrap created." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "1️⃣ ClapTrap destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	std::cout << "1️⃣ ClapTrap operator= called." << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "1️⃣ ClapTrap copy constructor called." << std::endl;
}
