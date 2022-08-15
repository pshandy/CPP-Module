/*
 * WrongAnimal.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <string>
#include <iostream>

class WrongAnimal {

public:

	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &other);

	WrongAnimal& operator=(const WrongAnimal &other);

	void makeSound(void) const;

	const std::string& getType() const;

protected:

	std::string type;

};

#endif
