//
//  WrongAnimal.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef WrongAnimal_hpp
#define WrongAnimal_hpp

#include "Animal.hpp"

class WrongAnimal {
protected:
	std::string type;

public:
	void makeSound() const;
	std::string getType() const;
	// MARK: Standart
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &other);
	
};

#endif /* WrongAnimal_hpp */
