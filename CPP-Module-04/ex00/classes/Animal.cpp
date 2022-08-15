/*
 * Animal.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/Animal.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Animal::Animal() : type("Animal"){

	std::cout << "Animal default constructor called."<< std::endl;

}

Animal::~Animal() {

	std::cout << "Animal destructor called."<< std::endl;

}

Animal::Animal(const Animal &other) {

	std::cout << "Animal copy constructor called."<< std::endl;
	(*this) = other;

}

/* --------------------------- Operators --------------------------- */

Animal& Animal::operator =(const Animal &other) {

	if (this != &other) {
		type = other.type;
	}

	return (*this);

}

/* ---------------------------- Methods ---------------------------- */

void	Animal::makeSound( void ) const
{
	std::cout << "The sound every single animal on earth makes... I guess."
		<< std::endl;
}

const std::string& Animal::getType() const {
	return type;
}
