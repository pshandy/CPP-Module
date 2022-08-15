/*
 * Dog.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog: public Animal {

public:

	Dog();
	virtual ~Dog();
	Dog(const Dog &other);

	Dog& operator = (const Dog &other);

	virtual void makeSound(void) const;

};

#endif
