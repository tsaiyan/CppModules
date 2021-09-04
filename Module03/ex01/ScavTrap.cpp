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
	std::cout << "ScavTrap with name \"" << this->name << "\" damaged for " << amount << " hp!" << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	
	std::cout << "ScavTrap " << this->name << " attacks "<< target <<
	", causing "<< this->attackDamage <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ScavTrap with name \"" << this->name << "\" repaired for " << amount << " hp!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
// MARK: - Defaults

ScavTrap::ScavTrap() {
	this->name = "Transgender";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap with name \""<< name << "\" created." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed." << std::endl;
}

