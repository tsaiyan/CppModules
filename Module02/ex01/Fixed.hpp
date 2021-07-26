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
#include <cmath>

class Fixed {
private:
	int					value;
	static const int	fractBits;
public:
	
	/*Methods*/
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw );
	
	//constructors
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	//destructor
	~Fixed();
	// copy contructor
	Fixed(const Fixed &other);
	//assignation operator overload 
	Fixed& operator=(const Fixed &other);
} ;

std::ostream &operator<<(std::ostream &out, Fixed const &value);
#endif /* Fixed_hpp */
