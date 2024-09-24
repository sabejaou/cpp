#include "AForm.hpp"

AForm::AForm(){
	this->name = "default";
	this->signGrade = 150;
	this->exGrade = 150;
	this->isSigned = 0;
}

AForm::AForm(int signGrade, int exGrade, std::string name){
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
		this->target = "";
		this->isSigned = 0;
	}
	else
		delete this;
	std::cout << "Aform Spawned !" << std::endl;
}

std::string AForm::getTarget() const
{
    return (this->target);
}


AForm::AForm( const AForm &cpy ) {
    this->name = cpy.name.c_str();
	this->signGrade = cpy.signGrade;
	this->exGrade = cpy.exGrade;
	this->isSigned = 0;
	std::cout << "Aform Spawned by copy!" << std::endl;
}

AForm& AForm::operator=( const AForm &inst ) {
	this->name = inst.name.c_str();
	this->signGrade = inst.signGrade;
	this->exGrade = inst.exGrade;
	this->isSigned = inst.isSigned;
    return *this;
}
void AForm::execute(Bureaucrat const & exec) const
{
	(void)exec;
	std::cout << "AFORM EXECUTION" << std::endl;
	return;
}

std::string AForm::getName() const
{
    return (this->name);
}

int AForm::getGradeSign()const
{
    return (this->signGrade);
}

int AForm::getGradeEx()const
{
    return (this->exGrade);
}

bool AForm::getSigned() const
{
    return (this->isSigned);
}

void AForm::beSigned(Bureaucrat &inst)
{
	if (inst.getGrade() <= this->getGradeSign())
	{
		this->isSigned = 1;
		std::cout << inst.getName() << " signed Aform " << this->name << std::endl;
	}
	else
	{
		std::cout << "Signature by " << inst.getName() << " of Aform " << this->name << " impossible: ";
		throw (GradeTooLowException());
	}
}

AForm::~AForm() {
    std::cout << "AForm" << " died" << std::endl;
}

std::ostream & operator<<(std::ostream & o, AForm const & i )
{
	 o << i.getName() << " need grade " << i.getGradeSign() << " to be signed and is executed at grade "  << i.getGradeEx() << ", contract contain " << i.getSigned() << " signatures"<< std::endl;
	 return o;
}
