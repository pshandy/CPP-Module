/*
 * whatever.hpp
 *
 *  Created on: Aug 13, 2022
 *      Author: pshandy
 */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>
#include <string>

template<typename T>
T max(T &x, T &y) {
	return (x > y) ? x : y;
}

template<typename T>
T min(T &x, T &y) {
	return (x < y) ? x : y;
}

template<typename T>
void swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

#endif
