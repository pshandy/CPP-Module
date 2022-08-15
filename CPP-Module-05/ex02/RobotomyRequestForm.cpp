/*
 * RobotomyRequestForm.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
		Form("RobotomyRequestForm", 72, 45) {
	target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
		Form("RobotomyRequestForm", 72, 45) {
	target = src.target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(
		RobotomyRequestForm const &obj) {
	target = obj.target;
	return *this;
}

void RobotomyRequestForm::action() const {

	srand((long) this);

	if (rand() & 1) {
		std::cout << "RIZZZZZZZZZZZZZZ..." << std::endl << target
				<< " has been robotomized successfully." << std::endl;
	} else {
		std::cout << target << " robotomy failed." << std::endl;
	}

}
