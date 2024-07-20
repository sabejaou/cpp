#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class AForm{
	protected:
        std::string	name;
		std::string	target;
		int		signGrade;
		int		exGrade;
		bool	isSigned;
        AForm(int signGrade, int exGrade, std::string name);
        AForm(const AForm &cpy);
        AForm& operator=( const AForm &inst );
    public:
        virtual ~AForm();
        std::string getName() const;
		int		getGradeSign() const;
		int		getGradeEx() const;
		bool	getSigned() const;
		void 	beSigned(class Bureaucrat &inst);
		virtual void execute(Bureaucrat const & exec) const;
		std::string getTarget() const;

		class GradeTooLowException{
		public:
			GradeTooLowException(){msg = "Grade too low exception occurs";};
			~GradeTooLowException(){};
			std::string getMessage(){return (msg);};
		private:
			std::string msg;
		};
		class FormNotSignedException{
		public:
			FormNotSignedException(){msg = "Form is not signed, can't be executed";};
			~FormNotSignedException(){};
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
	friend std::ostream & operator<<(std::ostream & o, AForm const & i );
};