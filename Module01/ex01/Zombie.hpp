/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m01ex01                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 16:58:59 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	Zombie(std::string name) {
		_name = name;
		std::cout << "Zombie with name " << _name <<" created 👼🏿." << std::endl;
	}

	void announce( void ) {
		std::cout << _name << "🧟" << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

	~Zombie() {
		std::cout << "Zombie with name " << _name <<" is dead ☠️." << std::endl;
	}
};

Zombie* newZombie( std::string name);
#endif /* Zombie_hpp */
