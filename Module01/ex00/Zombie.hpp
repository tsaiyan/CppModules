/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m01ex00                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 13:37:38 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
