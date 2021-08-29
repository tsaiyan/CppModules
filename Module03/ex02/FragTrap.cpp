//
//  FragTrap.cpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "3️⃣ FragTrap created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "3️⃣ FragTrap destroyed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "3️⃣ FragTrap created." << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "3️⃣ "<< ClapTrap::getName() << " give fives!" << std::endl;
}
