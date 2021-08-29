//
//  ScavTrap.hpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//
#include "ClapTrap.hpp"

#ifndef ScavTrap_hpp
#define ScavTrap_hpp

class ScavTrap : ClapTrap {
private:
	std::string	name;
	int	hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ScavTrap();
	ScavTrap(std::string name);
	void guardGate();
} ;

#endif /* ScavTrap_hpp */
