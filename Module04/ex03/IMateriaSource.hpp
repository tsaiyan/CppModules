//
//  IMateriaSource.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef IMateriaSource_hpp
#define IMateriaSource_hpp

#include "AMateria.hpp"


class IMateriaSource {

public:
	
   virtual ~IMateriaSource() {}
   virtual void learnMateria(AMateria*) = 0;
   virtual AMateria* createMateria(std::string const & type) = 0;

};
#endif /* IMateriaSource_hpp */
