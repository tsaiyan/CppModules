//
//  Zombie.cpp
//  M1E0
//
//  Created by Torres Saiyan on 7/11/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Zombie.hpp"

void Zombie::announce( void ) {
	std::cout << _name << "🧟" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << "Zombie with name " << _name <<" created 👼🏿." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie with name " << _name <<" is dead ☠️." << std::endl << std::endl;
}
