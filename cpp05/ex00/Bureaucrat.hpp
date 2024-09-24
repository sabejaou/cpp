#pragma once

#include <iostream>

class Bureaucrat{
    private:
        std::string	name;
		int		grade;
    public:
        Bureaucrat(int grade, std::string name);
		Bureaucrat();
        Bureaucrat(const Bureaucrat &cpy);
        Bureaucrat& operator=( const Bureaucrat &inst );
        ~Bureaucrat();
        std::string getName() const;
		int		getGrade() const;

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