#include <iostream>
#include <string>

class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

Base * generate(void) {

    srand(time(NULL));

    int id = rand() % 3;

    if (id == 0) {
    	std::cout << "A created." << std::endl;
    	return (new A());
    } else if (id == 1) {
    	std::cout << "B created." << std::endl;
    	return (new B());
    } else if (id == 2) {
    	std::cout << "C created." << std::endl;
    	return (new C());
    }

    return (nullptr);

}

void identify(Base* p) {

    if (dynamic_cast<A*>(p)) {
    	std::cout << "the Type is A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
    	std::cout << "the Type is B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
    	std::cout << "the Type is C" << std::endl;
    }

}

void identify(Base& p) {

    try {
        (void) dynamic_cast<A&>(p);
        std::cout << "the Type is A" << std::endl;
    }
    catch (std::exception & e) {}

    try {
        (void) dynamic_cast<B&>(p);
        std::cout << "the Type is B" << std::endl;
    }
    catch (std::exception & e) {}

    try {
        (void) dynamic_cast<C&>(p);
        std::cout << "the Type is C" << std::endl;
    }
    catch (std::exception & e) {}

}

int main(void) {

    Base *ptr;

    ptr = generate();

    identify(ptr);
    identify(*ptr);

    delete ptr;

}

