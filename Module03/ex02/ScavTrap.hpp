//
//  ScavTrap.hpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
public:
	ScavTrap(std::string name);
	void guardGate();
	
	// MARK: - defaults
	ScavTrap();
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &other);
	ScavTrap(const ClapTrap &other);
} ;

#endif /* ScavTrap_hpp */
