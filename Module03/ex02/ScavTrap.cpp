//
//  ScavTrap.cpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "2️⃣ ScavTrap created." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "2️⃣ ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "2️⃣ ScavTrap destroyed. ☠️" << std::endl;
}

//MARK: - defaults

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "2️⃣ ScavTrap created. " << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap::operator=(other);
	std::cout << "2️⃣ ScavTrap operator= called." << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(const ClapTrap &other) : ClapTrap(other) {
	std::cout << "2️⃣ ScavTrap copy constructor called." << std::endl;
}

