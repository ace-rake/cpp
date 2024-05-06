#include "main.h"
#include "ClassHeaders/Intern.hpp"
int main() {

	{
		print_test("creation");
		Bureaucrat b("Betty", 1);
		ShrubberyCreationForm	s("Home");
		RobotomyRequestForm	r("Geoff");
		PresidentialPardonForm	p("Geoff");

		print_test("unsigned execution");
		b.executeForm(s);
		b.executeForm(r);
		b.executeForm(p);

		print_test("Grade too low to sign");
		b.setGrade(150);
		b.signForm(s);
		b.signForm(r);
		b.signForm(p);

		print_test("Sign form");
		b.setGrade(1);
		b.signForm(s);
		b.signForm(r);
		b.signForm(p);

		print_test("Grade too low to execute");
		b.setGrade(150);
		b.executeForm(s);
		b.executeForm(r);
		b.executeForm(p);
		
		print_test("Execute");
		b.setGrade(1);
		b.executeForm(s);
		b.executeForm(r);
		b.executeForm(p);

		print_test("destruction");
	}

	{
		print_test("intern shit");
		Intern i;
		AForm *f = i.makeForm("robotomy request", "you");
		std::cout << *f << std::endl;
		delete f;
	}
    return 0;
}

