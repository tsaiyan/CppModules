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
	using FragTrap::hitPoints;
	using ScavTrap::energyPoints;
	using FragTrap::attackDamage;
public:
	
// MARK: - Methods
	void whoAmI();
	using ScavTrap::attack;
	using ScavTrap::guardGate;
	using FragTrap::highFivesGuys;
	
// MARK: - Defaults
	DiamondTrap();
	DiamondTrap(std::string name);
	virtual ~DiamondTrap();
  
    using FragTrap::takeDamage;
    using FragTrap::beRepaired;
	 
	// проверить ортодокс перегрузку и присваивание
	// https://github.com/kotabrog/CPP-module/blob/db858e57ac194d4ca9b38667ff3820418b42e9c8/module-03/ex03/DiamondTrap.hpp
} ;




#endif /* DiamondTrap_hpp */
