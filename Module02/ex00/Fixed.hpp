//
//  Fixed.hpp
//  m2e0
//
//  Created by Torres Saiyan on 7/14/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>

class Fixed {
private:
	int pointValue;
	static const int fractBits;
public:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	
	
	
	
	//constructor
	Fixed();
	//destructor
	~Fixed();
	// copy contructor
	Fixed(const Fixed &other);
	//assignation operator overload 
	Fixed& operator=(const Fixed &other);
} ;

#endif /* Fixed_hpp */
