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

#ifndef Zombie_hpp
#define Zombie_hpp

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	Zombie();
	void setName(std::string name);
	void announce( void );
	~Zombie();
};

Zombie* newZombie( std::string name);
Zombie* zombieHorde( int N, std::string name);
#endif /* Zombie_hpp */
