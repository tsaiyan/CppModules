/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m01ex03                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 16:58:59 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	_name = name;
}

void HumanB::attack() {
	if (this->_weapon)
	std::cout << _name << " attacks with his " << _weapon->getType() << "!" << std::endl;
	else
		std::cout << _name << " have no weapon!"<< std::endl;
}

void HumanB::setWeapon(Weapon &wep) {
	_weapon = &wep;
}
