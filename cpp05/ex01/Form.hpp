#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private:
        std::string	name;
		int		signGrade;
		int		exGrade;
		bool	isSigned;
    public:
		Form::Form();
        Form(int signGrade, int exGrade, std::string name);
        Form(const Form &cpy);
        Form& operator=( const Form &inst );
        ~Form();
        std::string getName() const;
		int		getGradeSign() const;
		int		getGradeEx() const;
		bool	getSigned() const;
		void 	beSigned(Bureaucrat &inst);

		class GradeTooLowException{
		public:
			GradeTooLowException(){msg = "Grade too low exception occurs";};
			~GradeTooLowException(){};
			std::string getMessage(){return (msg);};
		private:
			std::string msg;
		};
		class FormAlreadySignedException{
		public:
			FormAlreadySignedException(){msg = "Form is already signed, can't be signed";};
			~FormAlreadySignedException(){};
			std::string getMessage(){return (msg);};
		private:
			std::string msg;
		};
		class GradeTooHighException{
			public:
				GradeTooHighException(){msg = "Grade too high exception occurs";};
				~GradeTooHighException(){};
				std::string getMessage(){return (msg);};
			private:
				std::string msg;
		};
};
std::ostream & operator<<(std::ostream & o, Form const & i );