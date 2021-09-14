//
//  AMateria.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef AMateria_hpp
#define AMateria_hpp

#include <iostream>
#include "main.hpp"

class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const & type);
    //   [...]

// MARK: -  Methods
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);
	
// MARK: -  Standart
	
	AMateria();
	virtual ~AMateria();
	AMateria& operator=(const AMateria &other);
	AMateria(const AMateria &other);
	virtual void use(ICharacter &target);
};


#endif /* AMateria_hpp */
