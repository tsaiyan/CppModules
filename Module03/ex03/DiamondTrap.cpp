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

// MARK: - defaults

DiamondTrap::DiamondTrap() {
	ClapTrap("no _clap_name");
	this->name = "no DiamondTrap name";
	std::cout << "4️⃣ DiamondTrap created" << std::endl;
}


DiamondTrap::~DiamondTrap() {
	std::cout << "4️⃣ DiamondTrap destroyed." << std::endl;
}

