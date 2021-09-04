//
//  Cat.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.hpp"

class Cat: public Animal {

public:
	// MARK: Methonds
	virtual void makeSound() const;
	
	// MARK: Standart
	Cat();
	virtual ~Cat();
	Cat& operator=(const Cat &other);
	Cat(const Cat &other);
	
};

#endif /* Cat_hpp */
