
#include "Bureaucrat.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 3)
		return (-1);
	Bureaucrat *a;
	try {
		a = new Bureaucrat(std::atoi(av[1]), av[2]);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.getMessage() << std::endl;
		return (1);
	}
	std::cout << *a;
	if (a)
		delete a;
	return (0);
}