#include <iostream>
#include "Fixed.hpp"

#include <iostream>

int main( void ) {

	std::cout << "----------------------------";
	std::cout << " Increment, Decrement " << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << a << std::endl;
	a--;
	a++;
	--a;
	++a;
	std::cout << a << std::endl;


	std::cout << "----------------------------";
	std::cout << "The 4 arithmetic operators: +, -, *, and / " << std::endl;
	Fixed x(30.5f); float xF = 30.5f;
	Fixed y(-4.5f); float xY = -4.5f;

	std::cout << "x = " << x.toFloat() << ", y = " << y.toFloat() << std::endl;
	std::cout << "x + y = " << x + y << ". Expected: " << xF + xY << std::endl;
	std::cout << "x - y = " << (x - y) << ". Expected: " << xF - xY << std::endl;
	std::cout << "x * y = " << x * y << ". Expected: " << xF * xY << std::endl;
	std::cout << "x / y = " << x / y << ". Expected: " << xF / xY << std::endl;

	std::cout << "----------------------------";
	std::cout << "min, max" << std::endl;

	std::cout << "max: " << Fixed::max(x, y) << std::endl;
	std::cout << "min: " << Fixed::min(x, y) << std::endl;

	return (0);

}
