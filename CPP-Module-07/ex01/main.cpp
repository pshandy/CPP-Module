#include "iter.hpp"

/* ------------------------ Test 1 ------------------------ */

template<typename T>
void print_int(T &x) {
	std::cout << x << " ";
}

template<typename T>
void print_array(T *array, int size) {
	iter(array, size, print_int);
	std::cout << std::endl;
}

void multiply(int const &n) {
	std::cout << n * n << std::endl;
}

void printFormatted(std::string const &str) {
	std::cout << "F: " << str << " ";
}

void test1() {

	int array[] = { 1, 2, 3, 4, 5 };
	print_array(array, 5);

	iter(array, 5, multiply);
	print_array(array, 5);

	std::string strarr[] = { "aaaa", "gggg", "ssss" };
	iter(strarr, 3, printFormatted);
	std::cout << std::endl;

}

/* ------------------------ Test 2 ------------------------ */

class Awesome {

public:

	Awesome(void) :
			_n(42) {
		return;
	}

	int get(void) const {
		return this->_n;
	}

private:

	int _n;

};

std::ostream& operator<<(std::ostream &o, Awesome const &obj) {
	o << obj.get();
	return o;
}

template<typename T>
void print(T const &x) {
	std::cout << x << std::endl;
}

void test2() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
}

/* ------------------------ Main ------------------------ */

int main() {

	std::cout << "---Test 1---" << std::endl;
	test1();
	std::cout << "---Test 2---" << std::endl;
	test2();

}
