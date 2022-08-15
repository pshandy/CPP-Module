/*
 * Brain.hpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <string>
#include <iostream>

class Brain {

private:

	static const int numberOfIdeas = 100;

public:

	Brain();
	virtual ~Brain();
	Brain(const Brain &other);

	Brain& operator=(const Brain &other);

	std::string	ideas[Brain::numberOfIdeas];

};

#endif
