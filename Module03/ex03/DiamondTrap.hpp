//
//  DiamondTrap.hpp
//  m3e1
//
//  Created by Artyom on 27.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DiamondTrap_hpp
#define DiamondTrap_hpp

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string name;
public:
// MARK: - Methods
	void whoAmI();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
// MARK: - Defaults
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	 DiamondTrap(const DiamondTrap& copy);
	 DiamondTrap& operator= (const DiamondTrap& other);
} ;




#endif /* DiamondTrap_hpp */
