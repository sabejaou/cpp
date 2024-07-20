#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <cmath>
#include <cstring>
#include <vector>

Intern::Intern(){
		std::cout << "Intern Spawned !" << std::endl;
}

Intern::Intern( const Intern &cpy ){
	(void)cpy;
	std::cout << "Intern Spawned by copy!" << std::endl;
}

Intern& Intern::operator=( const Intern &inst ) {
	(void)inst;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern" << " died" << std::endl;
}

AForm *Intern::create(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::creater(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::creates(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string form, std::string target)
{ 
	AForm    *(Intern::*ptrs[])(std::string) = {&Intern::create, &Intern::creater, &Intern::creates};
	AForm *a;
	std::string requests[] = {"pardon request", "robotomy request", "shrubbery request"};

    for (size_t i = 0; i < 3; i++)
    {
        if (requests[i] == form)
        {
            a =(this->*ptrs[i])(target);
        }
    }
	return (a);
}