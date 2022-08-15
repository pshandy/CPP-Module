/*
 * Brain.cpp
 *
 *  Created on: Aug 11, 2022
 *      Author: pshandy
 */

#include "../inc/Brain.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Brain::Brain() {
	std::cout << "Brain default constructor called."<< std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called."<< std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called."<< std::endl;
	(*this) = other;
}

/* --------------------------- Operators --------------------------- */

Brain& Brain::operator=(const Brain &other) {

	if (this != &other) {
		for (int i = 0; i < Brain::numberOfIdeas; i++) {
			ideas[i] = other.ideas[i];
		}
	}

	return (*this);
}
