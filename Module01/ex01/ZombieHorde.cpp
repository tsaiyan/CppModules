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

Zombie* zombieHorde( int N, std::string name ){
	(void)name;
	std::string namesArray[7] = {"dmarget", "ctycho", "knfonda", "namerei", "lmurray", "mturquin", "ifanzilka"};
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(namesArray[rand() % 7]);
		horde[i].announce();
	}
	return (horde);
}
