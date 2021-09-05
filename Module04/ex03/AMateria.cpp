//
//  AMateria.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "AMateria.hpp"

#include <iostream>

class AMateria {
protected:
       //       [...]
public:
	AMateria(std::string const & type);
    //   [...]
//MARK: Methonds
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};
