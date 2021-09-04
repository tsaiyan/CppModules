//
//  Dog.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.hpp"

class Dog: public Animal {
public:
	// MARK: Methonds
	virtual void makeSound() const;

	// MARK: Standart
	Dog();
	virtual ~Dog();
	Dog& operator=(const Dog &other);
	Dog(const Dog &other);
	
};

#endif /* Dog_hpp */
