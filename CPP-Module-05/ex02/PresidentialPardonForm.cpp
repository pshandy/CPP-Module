/*
 * PresidentialPardonForm.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
		Form("PresidentialPardonForm", 25, 5) {
	target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form("PresidentialPardonForm", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(
		PresidentialPardonForm const &src) :
		Form("PresidentialPardonForm", 25, 5) {
	target = src.target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
		PresidentialPardonForm const &obj) {
	target = obj.target;
	return *this;
}

void PresidentialPardonForm::action() const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox."
			<< std::endl;
}
