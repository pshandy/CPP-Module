/*
 * Fixed.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: pshandy
 */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {

private:

	int	value;
	static const int bits = 8;

public:

	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed(const int nbr);
	Fixed(const float nbr);

	Fixed &operator = (const Fixed& fixed);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

};

std::ostream& operator<<(std::ostream& out, const Fixed& value);


#endif
