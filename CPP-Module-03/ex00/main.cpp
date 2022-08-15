#include "ClapTrap.hpp"

int main(void) {

	ClapTrap first("First");
	ClapTrap second("Second");

	first.attack("Second");
	second.takeDamage(5);

	first.attack("Second");
	second.takeDamage(4);

	second.attack("First");

	first.beRepaired(1);
	first.beRepaired(1);

	second.attack("First");
	first.takeDamage(100);

}
