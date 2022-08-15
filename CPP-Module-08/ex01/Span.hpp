/*
 * Span.hpp
 *
 *  Created on: 14 авг. 2022 г.
 *      Author: User
 */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {

private:

	unsigned int N;
	std::vector<int> nbrs;

public:

	Span();
	~Span();
	Span(unsigned int N);
	Span(const Span &other);

	Span& operator=(const Span &other);

	int shortestSpan();
	int longestSpan();

	void addNumber(int value);

	template<typename Iterator>
	void addNumber(Iterator begin, Iterator end) {
		if (nbrs.size() >= N) {
			throw Span::FullSpanException();
		}
		nbrs.insert(nbrs.begin(), begin, end);
	}

	class FullSpanException: public std::exception {
	public:
		virtual const char* what() const throw () {
			return "Span is full";
		}
	};

	class NoSpanException: public std::exception {
	public:
		virtual const char* what() const throw () {
			return "No span can be found";
		}
	};

};

#endif
