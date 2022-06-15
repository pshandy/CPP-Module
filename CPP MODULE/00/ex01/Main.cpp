#include "Contact.hpp"
#include "PhoneBook.hpp"

void	print_menu()
{
	std::cout << "|--------------------------|\n"
			  << "|         PHONEBOOK        |\n"
			  << "|--------------------------|\n"
			  << "|Insert a following command|\n"
			  << "|--------------------------|\n"
			  << "|  ADD  |  SEARCH  |  EXIT |\n"
			  << "|--------------------------|\n\n"
			  << " >> ";
}

int main()
{
	std::string	choice;
	PhoneBook 	phonebook;

	while (true)
	{

		print_menu();
		std::cin >> choice;

		if (choice == "ADD")
			phonebook.addContact();

		else if (choice == "SEARCH")
			phonebook.searchContact();

		else if (choice == "EXIT")
			break ;

		else
			std::cout << "Unknown command.\n";
	}
	return (0);
}
