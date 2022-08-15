#include "ScavTrap.hpp"

int main(void) {

	ClapTrap clapTrap;

	ScavTrap one;
	ScavTrap two("Ted");
	ScavTrap three = two;

	three.beRepaired(100);

	clapTrap.attack("Someone");

	one.attack("Ted");
	two.takeDamage(30);

	two.attack("default");

	two.guardGate();

}
