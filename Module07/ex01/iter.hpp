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

#ifndef iter_h
#define iter_h

struct Test {
public:
	std::string name;
	int age;
};
template <typename T>
void myprint(T &a) {
	std::cout << a << std::endl;
}

template <typename T>
void iter(T *array, int len, void(func)(T &)) {
	for (int i = 0; i < len; ++i) {
		func(array[i]);
	}
}


#endif /* iter_h */
