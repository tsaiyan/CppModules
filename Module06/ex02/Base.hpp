/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module06                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:30:11 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/11/22 20:30:13 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_hpp
#define Base_hpp

#include <stdio.h>

class Base {
public:
	virtual ~Base();
};

class A: public Base {
	
};

class B:  public Base {
	
};

class C:  public Base {
	
};

#endif /* Base_hpp */
