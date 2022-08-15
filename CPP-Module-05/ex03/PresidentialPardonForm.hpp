/*
 * PresidentialPardonForm.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class PresidentialPardonForm: public Form {

private:

	std::string target;

public:

	PresidentialPardonForm();
	~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);

	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

	void action() const;

};

#endif
