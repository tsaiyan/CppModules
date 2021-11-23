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

// http://cppstudio.com/post/5188/

#ifndef whatever_h
#define whatever_h

struct Test {
public:
	std::string name;
	int age;
};

namespace generics
{
	template <typename T>
	void swap(T &a, T &b) {
		T temp = a;
		a = b;
		b = temp;
	}

	template <typename T>
	const T& max(const T &a, const T &b) {
		return a > b ? a : b;
	}
	template <typename T>
	const T& min(const T &a, const T &b) {
		return a < b ? a : b;
	}
}

#endif /* whatever_h */
