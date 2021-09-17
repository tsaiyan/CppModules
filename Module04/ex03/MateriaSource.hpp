//
//  MateriaSource.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef MateriaSource_hpp
#define MateriaSource_hpp

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

private:
	AMateria *materias[4];
	
public:
	
	// MARK: -  Interface

	virtual void learnMateria(AMateria *);
	virtual AMateria* createMateria(std::string const & type);

	// MARK: -  Standart
	
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource& operator=(const MateriaSource &other);
	MateriaSource(const MateriaSource &other);
};
#endif /* MateriaSource_hpp */
