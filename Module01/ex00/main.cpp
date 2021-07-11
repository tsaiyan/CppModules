/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 13:37:38 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
//  main.cpp
//  M1E0
//
//  Created by Torres Saiyan on 7/11/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name);

int main(int argc, const char * argv[]) {
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 7; i != 0; i--)
		randomChump("");
	return 0;
}
