#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

public:

	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);

	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);

	void attack(const std::string& target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

protected:

	std::string name;

	int hitPoints;

	int energyPoints;

	int attackDamage;

};

#endif
