
#include "Form.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 4)
		return (-1);
	Form *a;
	Bureaucrat *b;
	try {
		a = new Form(std::atoi(av[1]), std::atoi(av[2]), av[3]);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	b = new Bureaucrat(135, "Paul");
	std::cout << *a;
	try{
		a->beSigned(*b);
	}
	catch (Form::GradeTooLowException& e)
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