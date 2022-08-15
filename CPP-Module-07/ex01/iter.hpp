/*
 * iter.hpp
 *
 *  Created on: Aug 13, 2022
 *      Author: pshandy
 */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>
#include <string>

template<typename T>
void iter(T *array, size_t size, void (*f)(T const&)) {
	for (size_t i = 0; i < size; i++) {
		f(array[i]);
	}
}

#endif
