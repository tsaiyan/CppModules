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

void func() {
	Cat cat = Cat();
	Cat cat2;

	cat.addIdeaToBrain("Piss into sneakers");
	cat2 = cat;
	std::cout << cat2.getIdea(0) << std::endl;
}

int main() {
	func();
	while(1);
}
