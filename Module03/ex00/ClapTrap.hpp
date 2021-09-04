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
private:
	std::string	name;
	int	hitPoints;
	int energyPoints;
	int attackDamage;

public:
	//MARK: - Methonds

	ClapTrap(std::string name);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	//MARK: - Defaults
	ClapTrap();
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &other);
	ClapTrap(const ClapTrap &other);
};
#endif /* ClapTrap_hpp */

