/*
 * ShrubberyCreationForm.cpp
 *
 *  Created on: Aug 12, 2022
 *      Author: pshandy
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
		Form("ShrubberyCreationForm", 145, 137) {
	target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form("ShrubberyCreationForm", 145, 137) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
		Form("ShrubberyCreationForm", 145, 137) {
	target = src.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
		ShrubberyCreationForm const &obj) {
	target = obj.target;
	return *this;
}

void ShrubberyCreationForm::action() const {

	std::ofstream outFile(target + "_shrubbery");

	if (!outFile) {
		std::cerr << "can't open/create" << target + "_shrubbery" << std::endl;
		return;
	}

	outFile << "       _-_\n"
			"    /~~   ~~\n"
			" /~~         ~~\n"
			"{               }\n"
			" \\  _-     -_  /\n"
			"   ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\" << std::endl;

}

