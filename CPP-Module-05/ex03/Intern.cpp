/*
 * Intern.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "Intern.hpp"

Intern::Intern() {

	forms[0].name = "RobotomyRequestForm";
	forms[0].function = &Intern::RobotomyRequestFunc;

	forms[1].name = "ShrubberyCreationForm";
	forms[1].function = &Intern::ShrubberyCreationFunc;

	forms[2].name = "PresidentialPardonForm";
	forms[2].function = &Intern::PresidentialPardonFunc;

}

Form* Intern::ShrubberyCreationFunc(std::string target) {
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::RobotomyRequestFunc(std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::PresidentialPardonFunc(std::string target) {
	return new PresidentialPardonForm(target);
}

Intern::Intern(Intern const & other) {
	(*this) = other;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & other) {

	for (int i = 0; i < 3; i++) {
		forms[i] = other.forms[i];
	}

	return (*this);

}

const char * Intern::FormNotFound::what() const throw() {
    return "Form Not Found";
}

Form * Intern::makeForm(std::string type, std::string target) {

	for (int i = 0; i < 3; i++) {
		if (type == forms[i].name)
		{
			return (this->*forms[i].function)(target);
		}
	}

	throw Intern::FormNotFound();

}
