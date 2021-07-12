#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << "Zombie with name " << _name <<" created 👼🏿." << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << "🧟" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie with name " << _name <<" is dead ☠️." << std::endl;
}
