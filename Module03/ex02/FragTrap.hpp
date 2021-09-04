//
//  FragTrap.hpp
//  m3e1
//
//  Created by Artyom on 26.07.2021.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef FragTrap_hpp
#define FragTrap_hpp

#include "ClapTrap.hpp"

class FragTrap : protected ClapTrap {
public:
	//MARK: - Methods
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
	
	// MARK: - Defaults
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator= (const FragTrap& other);
	
} ;
#endif /* FragTrap_hpp */
