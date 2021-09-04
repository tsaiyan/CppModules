//
//  ScavTrap.cpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// MARK: - Methods

void ScavTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "1️⃣ ScavTrap with name \"" << this->name << "\" damaged for " << amount << " hp!" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	
	std::cout << "2️⃣ ScavTrap " << this->name << " attacks "<< target <<
	", causing "<< this->attackDamage <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "2️⃣ ScavTrap with name \"" << this->name << "\" repaired for " << amount << " hp!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "2️⃣ ScavTrap have enterred in Gate keeper mode." << std::endl;
}

// MARK: - Defaults

ScavTrap::ScavTrap() {
	this->name = "Transgender";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "2️⃣ ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "2️⃣ ScavTrap with name \""<< name << "\" created." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "2️⃣ ScavTrap destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << " ScavTrap operator= called" << std::endl;
	if (this != &other) {
		this-> name = other.name;
		this->hitPoints = other.hitPoints;
		this->attackDamage = other.attackDamage;
		this->energyPoints = other.energyPoints;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
	std::cout << " ScavTrap copy conctructor called" << std::endl;
}
