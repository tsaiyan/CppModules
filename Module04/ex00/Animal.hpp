//
//  Animal.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef iostream
#define iostream
#include <iostream>
#endif

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>


class Animal {
protected:
	std::string type;
public:
	// MARK: Methonds
	virtual void makeSound() const;
	virtual	std::string getType() const;

	// MARK: Standart
	Animal();
	virtual ~Animal();
	Animal& operator=(const Animal &other);
	Animal(const Animal &other);
	
};

#endif /* Animal_hpp */
