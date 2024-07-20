#pragma once

#include <iostream>
#include "AForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern &cpy);
        Intern& operator=( const Intern &inst );
        ~Intern();
		AForm	*makeForm(std::string form, std::string target);
        AForm *create(std::string target);
		AForm *creates(std::string target);
		AForm *creater(std::string target);
	friend std::ostream & operator<<(std::ostream & o, Intern const & i );
};