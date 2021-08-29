//
//  ClapTrap.hpp
//  m3e0
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>

class ClapTrap {
protected:
	std::string	name;
	int	hitPoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(std::string name);
	virtual void attack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	
	//MARK: - ortodox
	ClapTrap();
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &other);
	ClapTrap(const ClapTrap &other);
};
#endif /* ClapTrap_hpp */
