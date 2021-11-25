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


#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span {
	
private:
	Span();
	std::vector<int> vector;
	unsigned size;
public:
	Span(unsigned size);
	void addNumber(const int newElement);
	unsigned getSize();
	unsigned long getLenght();
	int longestSpan();
	int shortestSpan();
	Span &operator=(const Span &reffer);
	Span(const Span &reffer);
	~Span();
};


#endif /* SPAN_H */
