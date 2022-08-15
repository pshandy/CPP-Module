#include "FragTrap.hpp"

/* ------------------------ Constructors ------------------------ */

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called. (" << name << ")" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	std::cout << "FragTrap copy constructor called. (" << name << ")" << std::endl;
	(*this) = fragTrap;
}


/* ------------------------ Destructor ------------------------ */

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called. (" << name << ")" << std::endl;
}

/* ------------------------  Operator  ------------------------ */

FragTrap &FragTrap::operator=(const FragTrap &other) {

	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}

	return (*this);

}

void FragTrap::highFivesGuys() {
	std::cout << this->name << " high fives!" << std::endl;
}
