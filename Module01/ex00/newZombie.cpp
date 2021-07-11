//
//  newZombie.cpp
//  M1E0
//
//  Created by Torres Saiyan on 7/11/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Zombie.hpp"

// return class

Zombie* newZombie( std::string name ){
	Zombie *pZombie = new Zombie(name);
	return (pZombie);
};
