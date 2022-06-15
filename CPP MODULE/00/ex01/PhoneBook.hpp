/*
 * PhoneBook.hpp
 *
 *  Created on: May 25, 2022
 *      Author: pshandy
 */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{

private:
	int		pos;
	Contact	contacts[8];

public:

	PhoneBook();
	virtual ~PhoneBook();

	void		addContact();
	void		searchContact();
	void		exitPhoneBook();

};


#endif /* 00_EX01_PHONEBOOK_HPP_ */
