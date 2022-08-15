/*
 * Contact.hpp
 *
 *  Created on: May 25, 2022
 *      Author: pshandy
 */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
#include <string>

class Contact
{

private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string darkestSecret;

public:

	Contact();
	Contact(int dummy);
	virtual ~Contact();

	std::string	getFirstName();
	void		setFirstName(std::string firstName);

	std::string	getLastName();
	void		setLastName(std::string lastName);

	std::string	getNickName();
	void		setNickName(std::string nickName);

	std::string	getPhoneNumber();
	void		setPhoneNumber(std::string phoneNumber);

	std::string getDarkestSecret();
	void		setDarkestSecret(std::string darkestSecret);

};


#endif
