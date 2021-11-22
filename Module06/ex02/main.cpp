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

/* В языке программирования C++ операция dynamic_cast преобразует тип данных (указатель или ссылку) вниз по иерархии наследования (из типа-предка в тип-потомок), с проверкой с помощью динамической идентификации типа данных, корректно ли приведение.
В отличие от обычного приведения типа в стиле Си, проверка корректности приведения типов производится во время выполнения программы. Оператор dynamic_cast может быть применён к указателям или ссылкам. Основное назначение dynamic_cast - преобразование указателя, который содержит адрес объекта-родителя, к указателю типа объекта-потомка. При невозможности преобразования (типы не состоят в родстве) будет получен нулевой указатель. При работе со ссылками при невозможности преобразования типа будет сгенерировано исключение std::bad_cast. Таким образом, оператор dynamic_cast обнаруживает сходство в процедуре приведения типа с таким языком программирования как Java, в отличие от Си, в котором не выполняется проверка корректности приведения типа во время выполнения программы. */

#include <iostream>
#include "Base.hpp"


void myPrint(std::string string) {
	std::cout << string << std:: endl;
}

// random generate class

Base *generate(void) {

	switch (std::rand() % 3) {
		case 0:
			myPrint("A created");
			return new A;
		case 1:
			myPrint("B created");
			return new B;
		case 2:
			myPrint("C created");
			return new C;
		default:
			throw -42;
	}
}

// check class type from refference

void identify(Base & p) {
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;

	try {
		a = &dynamic_cast< A &>(p);
		if (a != NULL) {
			printf("A found &\n");
			return;
		}
	} catch(...) {
	}

	try {
	b = &dynamic_cast< B &>(p);
		if (b != NULL) {
			printf("B found &\n");
			return;
		}
	} catch(...) {
	}

	try {
	c = &dynamic_cast< C &>(p);
		if (c != NULL) {
			printf("C found &\n");
			return;
		}
	} catch(...) {
	}
}
// check class type from pointer

void identify(Base * p) {
	A *a = dynamic_cast< A* >(p);
	
	if (a != NULL) {
		myPrint("A found *");
	}

	B *b = dynamic_cast< B* >(p);
	if (b != NULL) {
		myPrint("B found *");
	}

	C *c = dynamic_cast< C* >(p);
	if (c != NULL) {
		myPrint("C found *");
	}

}

int main() {
	std::srand(time(0));
	
	identify(*generate());
	identify(generate());
	return 0;
}

