//
//  DiamondTrap.cpp
//  m3e1
//
//  Created by Artyom on 27.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"



// MARK: - Methods

void DiamondTrap::attack(const std::string &target) {
		ScavTrap::attack(target);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "4️⃣ DiamondTrap with name \"" << this->name << "\" repaired for " << amount << " hp!" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "4️⃣ DiamondtrapName: " << this->name << ". ClaptrapName: " << ClapTrap::name << "." << std::endl;
}

// MARK: - defaults

DiamondTrap::DiamondTrap(std::string name) {
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "4️⃣ DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap() {
	ClapTrap::name = "noname_clap_name";
	this->name = "noname";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "4️⃣ DiamondTrap created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "4️⃣ DiamondTrap destroyed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << " DiamondTrap operator= called" << std::endl;
	if (this != &other) {
		ClapTrap::name = other.name + "_clap_name";
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->attackDamage = other.attackDamage;
		this->energyPoints = other.energyPoints;
	}
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
	std::cout << " DiamondTrap copy conctructor called" << std::endl;
}
