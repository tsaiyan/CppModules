//
//  main.cpp
//  m2e0
//
//  Created by Torres Saiyan on 7/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b(a);
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
}
