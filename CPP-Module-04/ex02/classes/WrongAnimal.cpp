/*
 * WrongWrongAnimal.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/WrongAnimal.hpp"

/* ------------------- Constructors & Destructor ------------------- */

WrongAnimal::WrongAnimal() : type("WrongAnimal"){

	std::cout << "WrongAnimal default constructor called."<< std::endl;

}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called."<< std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {

	std::cout << "WrongAnimal copy constructor called."<< std::endl;
	(*this) = other;

}

/* --------------------------- Operators --------------------------- */

WrongAnimal& WrongAnimal::operator =(const WrongAnimal &other) {

	if (this != &other) {
		type = other.type;
	}

	return (*this);

}

/* ---------------------------- Methods ---------------------------- */

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The sound every single WrongAnimal on earth makes... I guess."
		<< std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

