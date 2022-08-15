/*
 * Fixed.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: pshandy
 */

#include "Fixed.hpp"

/* ------------------------ Constructors ------------------------ */

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::Fixed(const int nbr) {
	this->value = nbr << this->bits;
}

Fixed::Fixed(const float nbr) {
	this->value = roundf(nbr * (1 << bits));
}

/* ------------------------ Destructors ------------------------ */

Fixed::~Fixed() {

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
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed &value) {
	out << value.toFloat();
	return (out);
}


/* The 6 comparison operators: >, <, >=, <=, == and != */

bool Fixed::operator >(const Fixed &other) const {
	return (value > other.getRawBits());
}

bool Fixed::operator <(const Fixed &other) const {
	return (value < other.getRawBits());
}

bool Fixed::operator >=(const Fixed &other) const {
	return (value >= other.getRawBits());
}

bool Fixed::operator <=(const Fixed &other) const {
	return (value <= other.getRawBits());
}

bool Fixed::operator ==(const Fixed &other) const {
	return (value == other.getRawBits());
}

bool Fixed::operator !=(const Fixed &other) const {
	return (value != other.getRawBits());
}

/* The 4 arithmetic operators: +, -, *, and / */

Fixed Fixed::operator +(const Fixed &other) {
	Fixed result(*this);
	result.setRawBits(value + other.getRawBits());
	return (result);
}

Fixed Fixed::operator -(const Fixed &other) {
	Fixed result(*this);
	result.setRawBits(value - other.getRawBits());
	return (result);
}

Fixed Fixed::operator *(const Fixed &other) {
	Fixed result(*this);
	result.setRawBits((value * other.getRawBits()) / (1 << bits));
	return (result);
}

Fixed Fixed::operator /(const Fixed &other) {
	Fixed result(*this);
	result.setRawBits((value * (1 << bits)) / other.getRawBits());
	return (result);
}

/* increment, decrement */

Fixed& Fixed::operator ++(void) {
	value++;
	return (*this);
}

Fixed Fixed::operator ++(int) {
	Fixed old(*this);
	value++;
	return (old);
}

Fixed& Fixed::operator --(void) {
	value--;
	return (*this);
}

Fixed Fixed::operator --(int) {
	Fixed old(*this);
	value--;
	return (old);
}

/* min max functions */

const Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b ? a : b);
}

const Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}
