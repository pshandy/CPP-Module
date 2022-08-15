/*
 * Dog.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/Dog.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Dog::Dog() {

	std::cout << "Dog default constructor called."<< std::endl;
	type = "Dog";

}

Dog::~Dog() {

	std::cout << "Dog destructor called."<< std::endl;

}

Dog::Dog(const Dog &other) {

	std::cout << "Dog copy constructor called."<< std::endl;
	(*this) = other;
}

/* --------------------------- Operators --------------------------- */

Dog& Dog::operator=(const Dog &other) {

	if (this != &other) {
		type = other.type;
	}

	return (*this);
}

/* ---------------------------- Methods ---------------------------- */

void	Dog::makeSound( void ) const
{
	std::cout << "* Dogs sound *"
		<< std::endl;
}
