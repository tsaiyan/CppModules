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

#include "HumanA.hpp"

void HumanA::attack(){
	std::cout << _name << " attacks with his " << _weapon.getType() << "!" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wep) : _weapon(wep){

	_name = name;
	_weapon = wep;
}
