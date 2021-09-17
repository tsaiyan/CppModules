#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();

src->learnMateria(new Ice());
	
src->learnMateria(new Cure());
	
ICharacter* me = new Character("me");
	
	AMateria* tmp = nullptr;
tmp = src->createMateria("ice");
	
me->equip(tmp);
	
tmp = src->createMateria("cure");
	
me->equip(tmp);
	
ICharacter* bob = new Character("bob");
	
me->use(0, *bob);
	
me->use(1, *bob);
	
delete bob;
	
delete me;
	
delete src;
	
	
	Ice testIce = Ice();
	Ice newIce = testIce;
	Cure testCure = Cure();
	Cure newCure = testCure;
	
	ICharacter* testCharacter = new Character("me");
	ICharacter* newCharacter = testCharacter;
	delete newCharacter;
return 0;
}
