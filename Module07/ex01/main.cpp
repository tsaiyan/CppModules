/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module 7                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:30:11 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/11/22 20:30:13 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
	std::string stringArray[] = { "one", "two", "free" };
	iter(stringArray, 3 ,myprint);
	std::cout << "- - - - - -- - - " << std::endl;
	
	int intArray[] = { 1, 2, 3};
	iter(intArray, 3 ,myprint);
	std::cout << "- - - - - -- - - " << std::endl;
	
	float floatArray[] = { 1.31, -999.777, 3.113};
	iter(floatArray, 3 ,myprint);
	return 0;
}
