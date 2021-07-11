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

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	(void)name;
	std::string namesArray[7] = {"dmarget", "ctycho", "knfonda", "namerei", "lmurray", "mturquin", "ifanzilka"};
	Zombie* zombies[N];

	for (int i = 0; i < N; i++) {
		zombies[i] = newZombie(namesArray[rand() % 7]);
		zombies[i]->announce();
	}
	for (int i = 0; i < N; i++) {
		delete zombies[i];
	}
	return (zombies[0]);
}
