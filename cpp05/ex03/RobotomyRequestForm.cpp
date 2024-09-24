#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cmath>

RobotomyRequestForm::RobotomyRequestForm(): AForm(72, 45, "RobotomyRequestForm"){
	this->target = "Default Target";
	std::cout << "RobotRequestForm Spawned !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(72, 45, "RobotomyRequestForm"){
    	this->target = target.c_str();
		std::cout << "RobotRequestForm Spawned !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &cpy ) : AForm(72, 45, "RobotomyRequestForm"){
    this->target = cpy.target.c_str();
	std::cout << "RobotRequestForm Spawned by copy!" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &inst ) {
	this->target = inst.target.c_str();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm" << " died" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & exec) const
{
	srand(time(NULL));
	if (!this->isSigned)
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw FormNotSignedException();
	}
	if (this->exGrade >= exec.getGrade())
	{
		std::cout << "Bzzz... Brsht... Wrsht..." << std::endl;
		if (rand() % 2)
			std::cout << "Robotomy of " << this->target << " is succesfull !" << std::endl;
		else
			std::cout << "Robotomy of " << this->target << " is a failure !" << std::endl;
	}
	else
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw GradeTooLowException();
	}
}