/*
 * Form.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "Form.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Form::Form() :
		name("none"), signGrade(1), executeGrade(1) {
	_signed = false;
}

Form::~Form() {
}

Form::Form(std::string name, int signGrade, int executeGrade) :
		name(name), signGrade(signGrade), executeGrade(executeGrade) {

	if (signGrade < HIGHEST || executeGrade < HIGHEST) {
		throw Form::GradeTooHighException();
	}

	if (signGrade > LOWEST || executeGrade > LOWEST) {
		throw Form::GradeTooLowException();
	}

	_signed = false;

}

Form::Form(const Form &other) :
		name(other.name), signGrade(other.signGrade), executeGrade(
				other.executeGrade) {
	*this = other;
}

/* --------------------------- Operators --------------------------- */

Form& Form::operator=(const Form &other) {

	if (this != &other) {
		this->_signed = other._signed;
	}

	return (*this);
}

std::ostream& operator <<(std::ostream &out, const Form &obj) {

	out << "name: " << obj.getName() << std::endl << "is signed: "
			<< (obj.isSigned() ? "yes" : "no") << std::endl << "grade to sign: "
			<< obj.getSignGrade() << std::endl << "grade to execute: "
			<< obj.getExecuteGrade() << std::endl;

	return (out);

}

/* ---------------------------- Methods ---------------------------- */

void Form::beSigned(Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() > signGrade) {
		throw Form::GradeTooLowException();
	}

	_signed = true;

}

void Form::execute(Bureaucrat const &executor) const {

    if (executor.getGrade() > executeGrade) {
    	throw Form::GradeTooLowException();
    }

    if (!_signed) {
        std::cout << "couldn't execute form because it's not signed" << std::endl;
        return ;
    }

    action();

    std::cout << executor.getName() << " executed " << name << std::endl;

}

/* ----------------------- Getters & setters------------------------ */

const int Form::getExecuteGrade() const {
	return executeGrade;
}

const std::string& Form::getName() const {
	return name;
}

bool Form::isSigned() const {
	return _signed;
}

const int Form::getSignGrade() const {
	return signGrade;
}

/* -------------------------- Exceptions --------------------------- */

const char* Form::GradeTooHighException::what() const throw () {
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw () {
	return "Grade Too Low";
}

