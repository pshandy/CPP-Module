/*
 * Array.hpp
 *
 *  Created on: Aug 13, 2022
 *      Author: pshandy
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <stdexcept>

template<typename T>

class Array {

public:

	Array();
	Array(unsigned int size);
	Array(const Array &other);
	~Array();

	Array& operator=(const Array &other);

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;

private:

	T *_array;
	unsigned int _size;

};

template<typename T>
Array<T>::Array() {
	_size = 0u;
	_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int size) {
	_size = size;
	_array = new T[size];
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &other) {
	_array = new T[other.size()];
	_size = other.size();
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = other[i];
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}

template<typename T>
Array<T>& Array<T>::operator =(const Array &other) {
	delete[] _array;
	_array = new T[other.size()];
	_size = other.size();
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = other[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator [](unsigned int index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template<typename T>
const T& Array<T>::operator [](unsigned int index) const {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif
