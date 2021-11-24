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

#ifndef Array_h
#define Array_h
#include "iostream"

template <typename T>

class Array {
private:
	T *array;
	unsigned int lenght;

public:
	// MARK: - Constructors
	Array() {
		array = 0;
		lenght = 0;
	}

	Array(unsigned int n) {
		array = new T[n];
		lenght = n;
	}
// MARK: - Destructor
	~Array() {
		if (array)
			delete[] array;
	}
// MARK: - copy const overload
	Array(const Array &source) {

		array = new T[source.lenght];
		for (size_t i = 0; i < source.lenght; i++)
			array[i] = source.array[i];
		lenght = source.lenght;
	}
	
	Array &operator=(const Array &source) {
		if (this == &source) return *this;
		if (array) delete[] array;
		
		array = new T[source.lenght];

		for (size_t i = 0; i < source.lenght; i++)
			array[i] = source.array[i];
		lenght = source.lenght;
		return *this;
	}

	T &operator[](const unsigned int index) {
		if (index < 0 || index > lenght) throw std::exception();
		return array[index];
	}

// MARK: - Getter
	int size() const {
		return lenght;
	}
};

#endif /* Array_h */
