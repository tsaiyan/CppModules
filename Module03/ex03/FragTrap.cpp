//
//  FragTrap.cpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
// MARK: - METHODS

void FragTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "3️⃣ FragTrap with name \"" << this->name << "\" damaged for " << amount << " hp!" << std::endl;
}

void FragTrap::attack(std::string const &target) {
	
	std::cout << "3️⃣ FragTrap " << this->name << " attacks "<< target <<
	", causing "<< this->attackDamage <<" points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "3️⃣ FragTrap with name \"" << this->name << "\" repaired for " << amount << " hp!" << std::endl;
}

// MARK: - defaults

FragTrap::FragTrap() : ClapTrap() {
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "3️⃣ FragTrap created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "3️⃣ FragTrap destroyed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "3️⃣ FragTrap with name \"" << name << "\" created." << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "3️⃣ FragTrap "<< this->name << ": give fives!" << std::endl;
}
