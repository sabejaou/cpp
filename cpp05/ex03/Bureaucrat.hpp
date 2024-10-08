#pragma once

#include <iostream>
#include "AForm.hpp"

class Bureaucrat{
    private:
        std::string	name;
		int		grade;
    public:
        Bureaucrat(int grade, std::string name);
        Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat();
        Bureaucrat& operator=( const Bureaucrat &inst );
        ~Bureaucrat();
        std::string getName() const;
		int		getGrade() const;
		void	signForm(class AForm & form);
		void	executeForm(class AForm const & form);

		class GradeTooHighException{
			public:
				GradeTooHighException(){msg = "Grade too high exception occurs";};
				~GradeTooHighException(){};
				std::string getMessage(){return (msg);};
			private:
				std::string msg;
		};
		class GradeTooLowException{
		public:
			GradeTooLowException(){msg = "Grade too low exception occurs";};
			~GradeTooLowException(){};
			std::string getMessage(){return (msg);};
		private:
			std::string msg;
		};	
};
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i );