//
//  Cure.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Cure_hpp
#define Cure_hpp

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	
	// MARK: -  Methods
	void use(ICharacter &target);
	AMateria * clone() const;
	
	// MARK: -  Standart
	
	Cure();
	virtual ~Cure();
	Cure& operator=(const Cure &other);
	Cure(const Cure &other);
};


#endif /* Cure_hpp */
