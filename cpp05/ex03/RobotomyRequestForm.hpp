#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public:
		RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
        RobotomyRequestForm& operator=( const RobotomyRequestForm &inst );
        ~RobotomyRequestForm();
		void	execute(Bureaucrat const & exec) const;
	friend std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & i );
};