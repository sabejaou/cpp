#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &cpy);
        PresidentialPardonForm& operator=( const PresidentialPardonForm &inst );
        ~PresidentialPardonForm();
		void	execute(Bureaucrat const & exec) const;
	friend std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & i );
};