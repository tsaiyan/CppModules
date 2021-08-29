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

class FragTrap : ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	void highFivesGuys(void);
} ;
#endif /* FragTrap_hpp */
