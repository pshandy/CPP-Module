/*
 * PhoneBook.cpp
 *
 *  Created on: May 25, 2022
 *      Author: pshandy
 */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	pos = 0;
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::addContact()
{
	Contact contact(42);

	contacts[pos] = contact;
	pos++;
	if (pos == 8)
		pos = 0;
}

std::string truncate(std::string str) {

	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 9)
		{
			str[i] = '.';
			break;
		}
	}
	return (str.substr(0, 10));
}

bool isNumber(std::string str)
{
    for (char c : str) {
        if (std::isdigit(c) == 0)
        	return false;
    }
    return true;
}

void		PhoneBook::searchContact()
{
	int	index;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << i << "|";

		std::cout << std::setw (10)
				<< std::right << truncate(this->contacts[i].getFirstName()) << "|";

		std::cout << std::setw (10)
				<< std::right << truncate(this->contacts[i].getLastName()) << "|";

		std::cout << std::setw (10)
				<< std::right << truncate(this->contacts[i].getNickName()) << "|" << std::endl;
	}

	std::cout << "Insert index (0-7): ";
	std::cin >> index;

	if (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore(12345, '\n');
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	std::cout << std::endl;

	if (index >= 0 && index <= 7)
	{
		std::cout << "Contact " << index << std::endl;
		std::cout << "---------\n";
		std::cout << "First name: " << this->contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[index].getNickName() << std::endl;
		std::cout << "Phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
	}

	else
		std::cout << "Wrong index\n";

	std::cout << std::endl;

}
