	/*
 * Bureaucrat.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <string>
#include <iostream>
class Bureaucrat;
#include "Form.hpp"

#define LOWEST 150
#define HIGHEST 1

class Bureaucrat {

private:

	std::string const name;
	int grade;

public:

	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);

	Bureaucrat(std::string Name, int grade);

	Bureaucrat& operator=(const Bureaucrat &other);

	int getGrade() const;
	const std::string& getName() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(Form & form);
	void executeForm(Form const & form);

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw ();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw ();
	};

};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
