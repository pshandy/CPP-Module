/*
 * Animal.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {

public:

	Animal();
	virtual ~Animal();
	Animal(const Animal &other);

	Animal &operator = (const Animal &other);

	virtual void makeSound(void) const = 0;

	const std::string& getType() const;

	virtual Brain *getBrain(void) const = 0;

protected:

	std::string type;

};

#endif
