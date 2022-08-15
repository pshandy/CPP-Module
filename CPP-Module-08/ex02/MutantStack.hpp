/*
 * MutantStack.hpp
 *
 *  Created on: 14 авг. 2022 г.
 *      Author: User
 */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>
#include <deque>
#include <iostream>

template <typename T>

class MutantStack : public std::stack<T, std::deque<T> > {
	
    public:
	
        MutantStack() {
        	
        };
        
        MutantStack(MutantStack const & other):std::stack<T>(other) {
        	
        };
        
        ~MutantStack() {
            this->c.clear();
        };

        MutantStack & operator=(MutantStack const & obj) {
            if (obj != *this) {
            	this->c = obj.c;
            }
            return *this;
        };


        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        
};

#endif
