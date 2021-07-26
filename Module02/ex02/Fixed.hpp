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
	// MARK: - METHODS
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw );
	static Fixed min(const Fixed &first, const Fixed &second);
	static Fixed max(const Fixed &first, const Fixed &second);

	// MARK: - CONSTRUCTORS
	Fixed();
	~Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed &other);

	// MARK: - OPERAND OVERLOADS
	
	Fixed& operator=(const Fixed &other);
	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);
	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
} ;

std::ostream &operator<<(std::ostream &out, Fixed const &value);
#endif /* Fixed_hpp */
