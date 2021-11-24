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
#include "Array.hpp"

void myprint(std::string string) {
	std::cout << string << std::endl;
}

int main() {
	
	Array<std::string> strings(5);
	
	std::cout << "- - - - - - - - - -- - " << std::endl;
	// MARK:: test throw

	try {
		strings[6];
	} catch (std::exception c) {
		myprint("out of range");
	}
	
	std::cout << "- - - - - - - - - -- - " << std::endl;
	// MARK:: test operator =
	strings[0] = "strings";
	
	Array<std::string> letters(0);
	letters = strings;
	myprint(letters[0]);
	
	std::cout << "- - - - - - - - - -- - " << std::endl;
	// MARK:: test copy constr
	strings[0] = "letters";
	
	Array<std::string> messages(strings);
	myprint(messages[0]);
	strings[0] = "";
	myprint(messages[0]);
	return 0;
}
