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

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {};
	
	MutantStack(const MutantStack &reffer) {
		*this = reffer;
	}
	
	MutantStack& operator=(const MutantStack &reffer) {
		(void)reffer;
		return *this;
	}
	
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		return (std::stack<T>::c.begin());
	}
	iterator end() {
		return (std::stack<T>::c.end());
	}
};



#endif /* SPAN_H */
