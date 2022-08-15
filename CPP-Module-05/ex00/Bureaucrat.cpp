/*
 * Bureaucrat.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "Bureaucrat.hpp"

/* ------------------- Constructors & Destructor ------------------- */

Bureaucrat::Bureaucrat() :
		name("none"), grade(LOWEST) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	(*this) = other;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
		name(name), grade(grade) {

	if (grade < HIGHEST) {
		throw Bureaucrat::GradeTooHighException();
	}

	if (grade > LOWEST) {
		throw Bureaucrat::GradeTooLowException();
	}

}

/* --------------------------- Operators --------------------------- */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {

	if (this != &other) {
		grade = other.grade;
	}

	return (*this);
}

std::ostream& operator <<(std::ostream &out, const Bureaucrat &obj) {
	out << "Name: " << obj.getName() << ". Grade: " << obj.getGrade()
			<< std::endl;
	return (out);
}

/* ---------------------------- Methods ---------------------------- */

void Bureaucrat::incrementGrade() {

	grade--;

	if (grade < HIGHEST) {
		throw Bureaucrat::GradeTooHighException();
	}

}

void Bureaucrat::decrementGrade() {

	grade++;

	if (grade > LOWEST) {
		throw Bureaucrat::GradeTooLowException();
	}

}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
	return "TooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "TooLowException";
}

/* ----------------------- Getters & setters------------------------ */

int Bureaucrat::getGrade() const {
	return (grade);
}

const std::string& Bureaucrat::getName() const {
	return (name);
}
