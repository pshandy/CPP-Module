/*
 * RobotomyRequestForm.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class RobotomyRequestForm: public Form {

private:

	std::string target;

public:

	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other);

	RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

	void action() const;

};

#endif
