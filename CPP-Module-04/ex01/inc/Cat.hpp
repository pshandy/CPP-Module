	/*
 * Cat.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

private:

	Brain	*brain;

public:

	Cat();
	virtual ~Cat();
	Cat(const Cat &other);

	Cat& operator=(const Cat &other);

	virtual void makeSound(void) const;

	virtual Brain* getBrain() const;
};

#endif
