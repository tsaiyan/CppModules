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

int main() {
//	ClapTrap Woman = ClapTrap();
//	ClapTrap Men("Men");
	ScavTrap Man;
//	ScavTrap Man2;
//	ScavTrap Ivan("Ivan");
//
//	Woman.attack("Men");
	//Ivan.guardGate();
	Man.attack("Woman");
	Man.guardGate();
	Man.takeDamage(100);
//	Man.guardGate();
//	Woman = Men;
//	Woman.attack("sdf");
	
	return 0;
}
