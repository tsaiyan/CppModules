//
//  Animal.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>


class Animal {
protected:
	std::string type;
public:
	virtual void makeSound();

	// MARK: Standart
	Animal();
	~Animal();
	
}

#endif /* Animal_hpp */
