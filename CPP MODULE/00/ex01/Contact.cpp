/*
 * Contact.cpp
 *
 *  Created on: May 25, 2022
 *      Author: pshandy
 */

#include "Contact.hpp"

Contact::Contact() {

}

Contact::Contact(int dummy) {
	std::cin.ignore(12345, '\n');
	std::cout << "First name: ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickName);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
}

Contact::~Contact() {

}

std::string	Contact::getFirstName()
{
	return (firstName);
}

void		Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getLastName()
{
	return (lastName);
}

void		Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getNickName()
{
	return (nickName);
}

void		Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

