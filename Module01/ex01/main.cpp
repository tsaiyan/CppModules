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

// MAIN

int main() {
	srand(static_cast<unsigned int>(time(0)));
	Zombie *horde = zombieHorde(3, "");
	delete[] horde;
	return 0;
}
