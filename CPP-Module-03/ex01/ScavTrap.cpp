#include "ScavTrap.hpp"

/* ------------------------ Constructors ------------------------ */

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called. (" << name << ")" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
	std::cout << "ScavTrap copy constructor called. (" << name << ")" << std::endl;
	(*this) = scavTrap;
}

/* ------------------------ Destructor ------------------------ */

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called. (" << name << ")" << std::endl;
}

/* ------------------------  Operator  ------------------------ */

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {

	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}

	return (*this);

}

void ScavTrap::attack(const std::string &target) {

	if (hitPoints < 1) {
		std::cout << "No hit points left." << std::endl;
		return ;
	}

	if (energyPoints < 1) {
		std::cout << "No energy points left." << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;

	energyPoints--;

}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
