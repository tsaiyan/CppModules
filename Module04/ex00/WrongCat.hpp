//
//  WrongCat.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef WrongCat_hpp
#define WrongCat_hpp

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	// MARK: Standart
	WrongCat();
	virtual ~WrongCat();
	WrongCat& operator=(const WrongCat &other);
	WrongCat(const WrongCat &other);
	
};

#endif /* WrongCat_hpp */
