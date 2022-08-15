#include "Bureaucrat.hpp"

int main() {

    try {
        Form f1 = Form("Form1", 10, 5);
        Bureaucrat b1 = Bureaucrat("Bob", 30);
        Bureaucrat b2 = Bureaucrat("Jhon", 1);

        b1.signForm(f1);

        std::cout << "----------" << std::endl;

        std::cout << f1;

        std::cout << "----------" << std::endl;

        b2.signForm(f1);

        std::cout << "----------" << std::endl;

        std::cout << f1;

        std::cout << "----------" << std::endl;

        Form f2 = Form("Form2", 1, 500);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}
