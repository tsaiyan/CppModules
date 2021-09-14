//
//  Ice.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Ice_hpp
#define Ice_hpp

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	// MARK: -  Methods
	
	AMateria * clone() const override;
	
	// MARK: -  Standart
	
	Ice();
	virtual ~Ice();
	Ice& operator=(const Ice &other);
	Ice(const Ice &other);
};


#endif /* Ice_hpp */
