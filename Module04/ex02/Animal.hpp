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

#include "Brain.hpp"


class Animal {
protected:
	Brain* brain;
	std::string type;
public:
	// MARK: Methonds
	virtual void makeSound() const;
	virtual	std::string getType() const;
	void addIdeaToBrain(std:: string);
	std::string getIdea(int i);

	// MARK: Standart
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal& operator=(const Animal &other);
	Animal(const Animal &other);

	virtual void protectCreateAnimal() = 0;
};

#endif /* Animal_hpp */
