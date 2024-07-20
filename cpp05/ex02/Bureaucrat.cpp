#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

Bureaucrat::Bureaucrat(int grade, std::string name){
	if (grade > 150)
		throw(GradeTooLowException());
	if (grade < 1)
		throw(GradeTooHighException());
	if (grade <= 150 && grade >= 1)
	{
    	this->name = name.c_str();
		this->grade = grade;
	}
	else
		delete this;
	std::cout << "Bureaucrat Spawned !" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &cpy ) {
    this->name = cpy.name.c_str();
	this->grade = cpy.grade;
	std::cout << "Bureaucrat Spawned by copy!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &inst ) {
	this->name = inst.name.c_str();
	this->grade = inst.grade;
    return *this;
}
std::string Bureaucrat::getName() const
{
    return (this->name);
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
	}
	catch (AForm::GradeTooLowException())
	{
		std::cout << "Execution by " << this->name << " of " << form.getName() << " impossible: ";
		throw GradeTooLowException();
	}
	catch (AForm::FormNotSignedException)
	{
		throw AForm::FormNotSignedException();
	}
}

int Bureaucrat::getGrade()const
{
    return (this->grade);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat" << " died" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i )
{
	 o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	 return o;
}
