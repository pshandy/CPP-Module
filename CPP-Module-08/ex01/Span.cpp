/*
 * Span.cpp
 *
 *  Created on: 14 авг. 2022 г.
 *      Author: User
 */

#include "Span.hpp"

Span::Span() {
	N = 0;
}

Span::~Span() {

}

Span::Span(const Span &other) {
	*this = other;
}

Span::Span(unsigned int N) {
	this->N = N;
}

Span& Span::operator=(const Span &other) {

	if (this != &other) {
	    N = other.N;
	    nbrs = other.nbrs;
	}

	return *this;

}

int Span::shortestSpan() {

    if (this->nbrs.size() < 2)
        throw Span::NoSpanException();

    typedef std::vector<int>::iterator it;
    it it1 = this->nbrs.begin();
    it it2 = this->nbrs.begin() + 1;
    int min = std::abs(*it2 - *it1);
    for (; it1 != this->nbrs.end(); it1++) {
        for (it2 = it1 + 1; it2 != this->nbrs.end(); it2++) {
            if (std::abs(*it2 - *it1) < min)
                min = std::abs(*it2 - *it1);
        }
    }

    return min;

}

int Span::longestSpan() {

    if (this->nbrs.size() < 2)
        throw Span::NoSpanException();

    typedef std::vector<int>::iterator it;
    it max = std::max_element(nbrs.begin(), nbrs.end());
    it min = std::min_element(nbrs.begin(), nbrs.end());
    return std::abs(*max - *min);

}

void Span::addNumber(int nbr) {

    if (this->nbrs.size() >= this->N) {
        throw Span::FullSpanException();
    }
    this->nbrs.push_back(nbr);

}
