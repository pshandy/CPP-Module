#include "ClapTrap.hpp"

/* ------------------------ Constructors ------------------------ */

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap default constructor called. (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap constructor called. (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called. (" << name << ")" << std::endl;
	(*this) = other;
}

/* ------------------------ Destructor ------------------------ */

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called. (" << name << ")" << std::endl;
}

/* ------------------------  Operator  ------------------------ */

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {

	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}

	return (*this);

}

/* ------------------------  Methods  ------------------------ */

void ClapTrap::attack(const std::string &target) {

	if (hitPoints < 1) {
		std::cout << "No hit points left." << std::endl;
		return ;
	}

	if (energyPoints < 1) {
		std::cout << "No energy points left." << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;

	energyPoints--;

}

void ClapTrap::takeDamage(unsigned int amount) {

	hitPoints -= amount;

	std::cout << name << " loses " << amount << " hit points!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

	if (hitPoints < 1) {
		std::cout << "No hit points left." << std::endl;
		return ;
	}

	if (energyPoints < 1) {
		std::cout << "No energy points left." << std::endl;
		return ;
	}

	hitPoints += amount;

	std::cout << "ClapTrap " << name << " restores " << amount << " hit points!"
			<< std::endl;

	energyPoints--;

}
