
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
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
		b->signForm(*a);
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
		catch (AForm::FormAlreadySignedException& e)
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
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	try{
		rrf->beSigned(*b);
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	try{
		b->executeForm(*rrf);
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
	(void)rrf;
	if (a)
		delete a;
	if (b)
		delete b;
	if (rrf)
		delete rrf;
	return (0);
}