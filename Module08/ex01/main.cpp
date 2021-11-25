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
#include "Span.hpp"
#include <vector>


int main() {
	{
	Span test(2);
	test.addNumber(-100);
	test.addNumber(100);
		std::cout << test.longestSpan() << std::endl;
	}
	
	{
	Span testLongest(100000);
	for (int i = -2000; i < 10000; i++) {
		testLongest.addNumber(i);
	}
	std::cout<< testLongest.longestSpan() << std::endl;

	std::cout<< testLongest.shortestSpan() << std::endl;
	}
}
