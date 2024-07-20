#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <cmath>

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(72, 45, "PresidentialPardonForm"){
    	this->target = target.c_str();
		std::cout << "PresPardonForm Spawned !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &cpy ) : AForm(72, 45, "PresidentialPardonForm"){
    this->target = cpy.target.c_str();
	std::cout << "PresPardonForm Spawned by copy!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &inst ) {
	this->target = inst.target.c_str();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm" << " died" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & exec) const
{
	srand(time(NULL));
	if (!this->isSigned)
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw FormNotSignedException();
	}
	if (this->exGrade >= exec.getGrade())
	{
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	}
	else
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw GradeTooLowException();
	}
}