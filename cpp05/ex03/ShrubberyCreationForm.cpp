#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(145, 137, "ShrubberyCreationForm"){
    	this->target = target.c_str();
		std::cout << "ShrubberyCreatForm Spawned!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &cpy ) : AForm(145, 137, "ShrubberyCreationForm"){
    this->target = cpy.target.c_str();
	std::cout << "ShrubberyCreatForm Spawned by copy!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &inst ) {
	this->target = inst.target.c_str();
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm" << " died" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & exec) const
{
	if (!this->isSigned)
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw FormNotSignedException();
	}
	if (this->exGrade >= exec.getGrade())
	{
		std::string tree = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\\\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n";
		std::ofstream outfile;
		std::string	  name;

		name = this->target.c_str();
		name += "_shruberry";
		outfile.open(name.c_str());
		for (int i = 0; i < 3; i++)
			outfile << tree;
		outfile.close();
	}
	else
	{
		std::cout << "Execution by " << exec.getName() << " of " << this->name << " impossible: ";
		throw GradeTooLowException();
	}
}