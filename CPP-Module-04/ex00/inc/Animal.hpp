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

class Animal {

public:

	Animal();
	virtual ~Animal();
	Animal(const Animal &other);

	Animal &operator = (const Animal &other);

	const std::string& getType() const;

	virtual void makeSound(void) const;

protected:

	std::string type;

};

#endif
