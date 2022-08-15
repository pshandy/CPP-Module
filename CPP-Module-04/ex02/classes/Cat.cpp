/*
 * Cat.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/Cat.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Cat::Cat() {

	std::cout << "Cat default constructor called."<< std::endl;
	type = "Cat";
	brain = new Brain();

}

Cat::~Cat() {

	delete(brain);
	std::cout << "Cat destructor called."<< std::endl;

}

Cat::Cat(const Cat &other) {

	brain = new Brain();
	std::cout << "Cat copy constructor called."<< std::endl;
	(*this) = other;

}

/* --------------------------- Operators --------------------------- */


Cat& Cat::operator=(const Cat &other) {

	if (this != &other) {
		type = other.type;
		delete(brain);
		brain = new Brain();
		*brain = *(other.brain);
	}

	return (*this);

}

/* ---------------------------- Methods ---------------------------- */

void Cat::makeSound(void) const {
	std::cout << "* Cats sound *"
		<< std::endl;
}

Brain* Cat::getBrain() const {
	return (brain);
}
