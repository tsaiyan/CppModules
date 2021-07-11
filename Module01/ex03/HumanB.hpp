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

#ifndef HumanB_hpp
#define HumanB_hpp

#include "Weapon.hpp"

class HumanB {
private:
	Weapon *_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &wep);
	
} ;

#endif 
