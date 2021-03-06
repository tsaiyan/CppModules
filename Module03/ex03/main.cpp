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


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	DiamondTrap diamond = DiamondTrap("TEST");
	diamond.whoAmI();
	diamond.attack("target");
//	diamond.beRepaired(100);
	diamond.guardGate();
	diamond.highFivesGuys();
//	
//	DiamondTrap newDiamond = DiamondTrap("NEWNAME");
//	diamond = newDiamond;
//	diamond.whoAmI();
}
