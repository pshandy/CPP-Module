/*
 * ShrubberyCreationForm.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm: public Form {

private:

	std::string target;

public:

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

	void action() const;

};

#endif
