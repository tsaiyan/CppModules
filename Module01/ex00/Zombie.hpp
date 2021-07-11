//
//  Zombie.hpp
//  M1E0
//
//  Created by Torres Saiyan on 7/11/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Zombie_hpp
#define Zombie_hpp

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	void announce( void ) {
		std::cout << _name << "🧟" << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	
	Zombie(std::string name) {
		_name = name;
		std::cout << "Zombie with name " << _name <<" created 👼🏿." << std::endl;
	}
	
	~Zombie() {
		std::cout << "Zombie with name " << _name <<" is dead ☠️." << std::endl << std::endl;
	}
};

Zombie* newZombie( std::string name);
#endif /* Zombie_hpp */
