/*
 * Form.hpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <string>
#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form {

private:

	const std::string name;
	bool _signed;
	const int signGrade;
	const int executeGrade;

public:

	Form();
	~Form();
	Form(const Form &other);
	Form& operator=(const Form &other);

	Form(std::string name, int signGrade, int executeGrade);

	const int getExecuteGrade() const;
	const std::string& getName() const;
	const int getSignGrade() const;
	bool isSigned() const;

	void beSigned(Bureaucrat &b);

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw ();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw ();
	};

};

std::ostream& operator<<(std::ostream &out, Form const &obj);

#endif
