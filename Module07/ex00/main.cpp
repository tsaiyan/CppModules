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
#include "whatever.hpp"

int main() {

	//MARK: - Test Swap
	{
	Test hero = { "Ivan", 26 };
	Test general = { "Artur", 31 };
	generics::swap(hero, general);
	std::cout << "hero " << hero.name << " age " << hero.age << std::endl;
	std::cout << "general " << general.name << " age " << general.age << std::endl;
	}
	
	{
	int a = 2;
	int b = 3;
	generics::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << generics::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << generics::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	generics::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << generics::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << generics::max( c, d ) << std::endl;
	}
	return 0;
}
