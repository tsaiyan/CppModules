//
//  FragTrap.cpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap() {
	this->name = "Asexual";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap created." << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "give fives!" << std::endl;
}
