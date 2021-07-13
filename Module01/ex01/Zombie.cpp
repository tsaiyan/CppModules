/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 16:58:59 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name) {
	_name = name;
}

Zombie::Zombie() {
	std::cout << "Zombie created 👼🏿." << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << "🧟" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie with name " << _name <<" is dead ☠️." << std::endl;
}
