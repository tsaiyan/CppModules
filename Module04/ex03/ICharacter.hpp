//
//  Character.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef ICharacter_hpp
#define ICharacter_hpp

#include "AMateria.hpp"


class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;

	virtual void use(int idx, ICharacter& target) = 0;
};

#endif /* Character_hpp */
