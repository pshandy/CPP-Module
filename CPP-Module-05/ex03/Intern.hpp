/*
 * Intern.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>
#include <string>
class Intern;
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:

	struct level {
		std::string name;
		Form* (Intern::*function)(std::string target);
	};

	struct level forms[3];

	Form* ShrubberyCreationFunc(std::string target);
	Form* RobotomyRequestFunc(std::string target);
	Form* PresidentialPardonFunc(std::string target);

public:

	Intern();
	~Intern();
	Intern(const Intern &other);

	Intern& operator=(const Intern &other);

	Form* makeForm(std::string type, std::string target);

	class FormNotFound: public std::exception {
	public:
		const char* what() const throw ();
	};

};

#endif
