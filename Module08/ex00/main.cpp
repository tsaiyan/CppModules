/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module 8                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:30:11 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/11/22 20:30:13 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iterator.hpp"
#include <vector>


int main() {

	std::vector<int> array = {1, 2, 3};

	std::string	str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;

	std::cout << *easyfind(array, 1) << std::endl;
	try {
		std::cout << *easyfind(array, 0) << std::endl;
	} catch(...) {
		std::cout << "no member" << std::endl;
	}
	
	std::cout << *easyfind(stringREF, 'H') << std::endl;;
}
