
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int main()
{
	AForm *a;
	Bureaucrat *b;
	try {
		a = new PresidentialPardonForm("John");
	}
	catch (AForm::GradeTooHighException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	b = new Bureaucrat(30, "Paul");
	std::cout << *a;
	try{
		a->beSigned(*b);
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	try{
		b->executeForm(*a);
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	std::cout << *a;
	if (a)
		delete a;
	if (b)
		delete b;
	return (0);
}