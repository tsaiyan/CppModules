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

// prototypes
Zombie* zombieHorde( int N, std::string name);
void randomChump( std::string name);

// make new zombie

Zombie* newZombie( std::string name ){
	Zombie *pZombie = new Zombie(name);
	return (pZombie);
};

// MAIN

int main() {
	srand(static_cast<unsigned int>(time(0)));
	zombieHorde(3, "");
	return 0;
}
