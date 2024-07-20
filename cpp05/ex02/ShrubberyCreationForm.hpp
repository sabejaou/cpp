#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm &inst );
        ~ShrubberyCreationForm();
		void	execute(Bureaucrat const & exec) const;
	friend std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & i );
};