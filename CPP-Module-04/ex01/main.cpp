
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongCat.hpp"
#include "inc/Brain.hpp"
#include "inc/Animal.hpp"

#define N 8

int main() {

	std::cout << "------------------------------" << std::endl;

	Dog basic;
	basic.getBrain()->ideas[0] = "not null";
	{
		Dog tmp = basic;
	}
	std::cout << basic.getBrain()->ideas[0] << std::endl;

	std::cout << "------------------------------" << std::endl;

	Animal	*animals[N];

	for (int i = 0; i < N; i++)
	{
		if (i < N / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < N; i++) {
		delete animals[i];
	}

	std::cout << "------------------------------" << std::endl;

	Dog dog1;
	Dog dog2;

	Brain *br1 = dog1.getBrain();
	Brain *br2 = dog2.getBrain();

	br1->ideas[0] = "dog1 first idea";
	br1->ideas[1] = "dog1 second idea";

	br2->ideas[0] = "dog2 first idea";
	br2->ideas[1] = "dog2 second idea";

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;

	dog2 = dog1;

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;

	std::cout << "------------------------------" << std::endl;

	Cat *cat1 = new Cat;
	Cat *cat2 = new Cat;

	Brain *_br1 = cat1->getBrain();
	Brain *_br2 = cat2->getBrain();

	_br1->ideas[0] = "cat1 first idea";
	_br1->ideas[1] = "cat1 second idea";

	_br2->ideas[0] = "cat2 first idea";
	_br2->ideas[1] = "cat2 second idea";

	std::cout << cat1->getBrain()->ideas[0] << std::endl;
	std::cout << cat2->getBrain()->ideas[0] << std::endl;

	*cat2 = *cat1;

	std::cout << cat1->getBrain()->ideas[0] << std::endl;
	std::cout << cat2->getBrain()->ideas[0] << std::endl;

	delete cat1;
	delete cat2;

}
