/*
 * Fixed.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: pshandy
 */

#include "Fixed.hpp"

/* ------------------------ Constructors ------------------------ */

Fixed::Fixed() {
	std::cout << "Default constructor called!" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called!" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int nbr) {
	std::cout << "Int constructor called" << std::endl;
	this->value = nbr << this->bits;
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float constructor called!" << std::endl;
	this->value = roundf(nbr * (1 << bits));
}

/* ------------------------ Destructors ------------------------ */

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* ------------------------  Functions  ------------------------ */

float Fixed::toFloat(void) const {
	return (this->value / (float)(1 << bits));
}

int Fixed::toInt(void) const {
	return (this->value >> this->bits);
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

/* ------------------------  Operators  ------------------------ */

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed &value) {
	out << value.toFloat();
	return (out);
}

