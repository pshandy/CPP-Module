/*
 * Dog.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

private:

	Brain	*brain;

public:

	Dog();
	virtual ~Dog();
	Dog(const Dog &other);

	Dog& operator = (const Dog &other);

	virtual void makeSound(void) const;

	virtual Brain* getBrain() const;
};

#endif
