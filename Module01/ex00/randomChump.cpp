//
//  randomChump.cpp
//  M1E0
//
//  Created by Torres Saiyan on 7/11/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Zombie.hpp"
#include "ctime"

void randomChump( std::string name)
{
	std::string namesArray[7] = {"dmarget", "ctycho", "knfonda", "namerei", "lmurray", "mturquin", "ifanzilka"};
	
	Zombie* zombie = newZombie(namesArray[rand() % 7]);
	zombie->announce();
	delete(zombie);
}
