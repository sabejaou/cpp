#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	this->name = "default";
	this->grade = 150;
}

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
}

Bureaucrat::Bureaucrat( const Bureaucrat &cpy ) {
    this->name = cpy.name.c_str();
	this->grade = cpy.grade;
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
