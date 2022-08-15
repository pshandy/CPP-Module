#include <iostream>
#include <string>
#include <limits>

bool is_pseudo_literal(std::string &s) {
	return s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf"
			|| s == "+inf" || s == "nan";
}

void print_char(int nbr) {

	if (nbr >= std::numeric_limits<char>::min()
			&& nbr <= std::numeric_limits<char>::max()) {
		char c = static_cast<char>(nbr);
		std::cout << "char: "
				<< (isprint(c) ? std::string(1, c) : "Non displayable")
				<< std::endl;
	} else {
		std::cout << "char: " << "Impossible" << std::endl;
	}

}

void print_int(float nbr) {

	if (nbr >= std::numeric_limits<int>::min()
			&& nbr <= std::numeric_limits<int>::max()) {
		int c = static_cast<int>(nbr);
		std::cout << "int: " << c << std::endl;
	} else {
		std::cout << "int: " << "Impossible" << std::endl;
	}

}

void print_float(double nbr) {

	if (nbr >= -std::numeric_limits<float>::max()
			&& nbr <= std::numeric_limits<float>::max()) {
		float c = static_cast<float>(nbr);
		if ((double) nbr - static_cast<int>(nbr) == 0) {
			std::cout << "float: " << c << ".0f" << std::endl;
		} else {
			std::cout << "float: " << c << "f" << std::endl;
		}
	} else {
		std::cout << "float: " << "Impossible" << std::endl;
	}

}

void print_double(double nbr) {

	if (nbr - static_cast<int>(nbr) == 0) {
		std::cout << "double: " << nbr << ".0" << std::endl;
	} else {
		std::cout << "double: " << nbr << std::endl;
	}

}

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}

	std::string str(argv[1]);

	//Pseudo
	if (is_pseudo_literal(str)) {
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << std::strtof(str.c_str(), nullptr) << "f"
				<< std::endl;
		std::cout << "double: " << std::strtod(str.c_str(), nullptr)
				<< std::endl;
		return (0);
	}

	//Char
	if (str.length() == 1 && isalpha(str[0])) {

		int c = (int) str[0];
		std::cout << "char: " << str[0] << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return (0);

	}

	//Integer
	if (str.find('.') == std::string::npos) {

		int nbr = std::atoi(str.c_str());
		print_char(nbr);
		std::cout << "int: " << nbr << std::endl;
		std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nbr) << ".0"
				<< std::endl;
		return (0);

	}

	//Float
	if (str.find('f') != std::string::npos) {

		float nbr = std::strtof(str.c_str(), nullptr);

		print_char(static_cast<int>(nbr));

		print_int(nbr);

		if (nbr - static_cast<int>(nbr) == 0) {
			std::cout << "float: " << nbr << ".0f" << std::endl;
		} else {
			std::cout << "float: " << nbr << "f" << std::endl;
		}

		print_double((double) nbr);

		return 0;
	}

	//Double
	if (str.find('.') != std::string::npos) {

		double nbr = std::strtod(str.c_str(), nullptr);

		print_char(static_cast<int>(nbr));

		print_int(static_cast<float>(nbr));

		print_float(nbr);

		print_double(nbr);

		return (0);

	}

	return (0);
}
