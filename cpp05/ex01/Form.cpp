#include "Form.hpp"

Form::Form(int signGrade, int exGrade, std::string name){
	if (signGrade > 150 || exGrade > 150)
	{
		std::cout << "Creation: ";
		throw(GradeTooLowException());
	}
	if (signGrade < 1 || exGrade < 1)
	{
		std::cout << "Creation: ";
		throw(GradeTooHighException());
	}
	if (signGrade <= 150 && signGrade >= 1 && exGrade <= 150 && exGrade >= 1)
	{
    	this->name = name.c_str();
		this->signGrade = signGrade;
		this->exGrade = exGrade;
		this->isSigned = 0;
	}
	else
		delete this;
}

Form::Form( const Form &cpy ) {
    this->name = cpy.name.c_str();
	this->signGrade = cpy.signGrade;
	this->exGrade = cpy.exGrade;
	this->isSigned = 0;
}

Form& Form::operator=( const Form &inst ) {
	this->name = inst.name.c_str();
	this->signGrade = inst.signGrade;
	this->exGrade = inst.exGrade;
	this->isSigned = inst.isSigned;
    return *this;
}
std::string Form::getName() const
{
    return (this->name);
}

int Form::getGradeSign()const
{
    return (this->signGrade);
}

int Form::getGradeEx()const
{
    return (this->exGrade);
}

bool Form::getSigned() const
{
    return (this->isSigned);
}

void Form::beSigned(Bureaucrat &inst)
{
	if (this->isSigned)
	{
		std::cout << "Signature by " << inst.getName() << " of Aform " << this->name << " impossible: ";
		throw (FormAlreadySignedException());
	}
	if (inst.getGrade() <= this->getGradeSign())
	{
		this->isSigned = 1;
		std::cout << inst.getName() << " signed form " << this->name << std::endl;
	}
	else
	{
		std::cout << "Signature by " << inst.getName() << " of form " << this->name << " impossible: ";
		throw (GradeTooLowException());
	}
}

Form::~Form() {
    std::cout << "Form" << " died" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Form const & i )
{
	 o << i.getName() << " form need grade " << i.getGradeSign() << " to be signed and is executed at grade "  << i.getGradeEx() << ", contract contain " << i.getSigned() << " signatures"<< std::endl;
	 return o;
}
