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

class ScavTrap : virtual public ClapTrap {
public:
	std::string name;
	//MARK: - Methods
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	
	// MARK: - Defaults
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator= (const ScavTrap& other);
} ;

#endif /* ScavTrap_hpp */
