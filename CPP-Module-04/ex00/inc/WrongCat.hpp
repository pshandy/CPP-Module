/*
 * WrongCat.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &other);

	WrongCat& operator=(const WrongCat &other);

	void makeSound(void) const;

};

#endif
