//
//  main.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
//		Cat cat = Cat();
//		Cat cat2;
//
//		cat.addIdeaToBrain("Piss into sneakers");
//		cat2 = cat;
//		std::cout << cat2.getIdea(0) << std::endl;
//
//	cat2.makeSound();
//
	int count = 10;

	Animal* array[count];
	
	for (int i = 0; i < count; i++) {
		if (i < 5) {
			array[i] = new Cat();
		} else {
			array[i] = new Dog();
		}
	}
	
	for (int i = 0; i < count; i++) {
		delete array[i];
	}
	while(1);
}


