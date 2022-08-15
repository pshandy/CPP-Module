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
	brain = new Brain();

}

Dog::~Dog() {

	delete(brain);
	std::cout << "Dog destructor called."<< std::endl;

}

Dog::Dog(const Dog &other) {

	brain = new Brain();
	std::cout << "Dog copy constructor called."<< std::endl;
	(*this) = other;
}

/* --------------------------- Operators --------------------------- */

Dog& Dog::operator=(const Dog &other) {

	if (this != &other) {
		type = other.type;
		delete(brain);
		brain = new Brain();
		*brain = *(other.brain);
	}

	return (*this);
}

/* ---------------------------- Methods ---------------------------- */

void	Dog::makeSound( void ) const
{
	std::cout << "* Dogs sound *"
		<< std::endl;
}

Brain *Dog::getBrain() const {
	return (brain);
}
