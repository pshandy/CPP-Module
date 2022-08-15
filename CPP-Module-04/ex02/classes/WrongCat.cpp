/*
 * WrongWrongCat.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/WrongCat.hpp"

/* ------------------- Constructors & Destructor ------------------- */

WrongCat::WrongCat() {

	std::cout << "WrongCat default constructor called."<< std::endl;
	type = "WrongCat";

}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called."<< std::endl;

}

WrongCat::WrongCat(const WrongCat &other) {

	std::cout << "WrongCat copy constructor called."<< std::endl;
	(*this) = other;

}

/* --------------------------- Operators --------------------------- */


WrongCat& WrongCat::operator=(const WrongCat &other) {

	if (this != &other) {
		type = other.type;
	}

	return (*this);

}

/* ---------------------------- Methods ---------------------------- */

void WrongCat::makeSound(void) const {
	std::cout << "* WrongCats sound *"
		<< std::endl;
}


