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

	int value;
	static const int bits = 8;

public:

	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed(const int nbr);
	Fixed(const float nbr);

	Fixed& operator =(const Fixed &fixed);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

	/* The 6 comparison operators: >, <, >=, <=, == and != */

	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	/* The 4 arithmetic operators: +, -, *, and / */

	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);

	/* The 4 increment/decrement (pre-increment and post-increment,
	 * pre-decrement and post-decrement) operators, that will increase
	 * or decrease the fixed-point value from the smallest representable
	 * such as 1 + e > 1.
	 */

	Fixed& operator++(void); //pre
	Fixed operator++(int); // post
	Fixed& operator--(void); // pre
	Fixed operator--(int); // post

	/* A static member function min that takes as parameters two references
	 * on fixed-point numbers, and returns a reference to the smallest one. */

	static const Fixed& min(Fixed &a, Fixed &b);

	/* A static member function min that takes as parameters two references
	 * to constant fixed-point numbers, and returns
	 * a reference to the smallest one.
	 */

	static const Fixed& min(const Fixed &a, const Fixed &b);

	/* A static member function max that takes as parameters two references
	 * on fixed-point numbers, and returns a reference to the greatest one. */

	static const Fixed& max(Fixed &a, Fixed &b);

	/* A static member function max that takes as parameters two
	 * references to constant fixed-point numbers,
	 * and returns a reference to the greatest one.
	 */

	static const Fixed& max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream &out, const Fixed &value);

#endif
