//
//  Character.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string name;
	AMateria	*materias[4];
public:
	
	// MARK: -  Interface

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	
	// MARK: -  Standart
	Character(std::string name);
	Character();
	virtual ~Character();
	Character& operator=(const Character &other);
	Character(const Character &other);
};

#endif /* Character_hpp */
