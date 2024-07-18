#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <sstream>
#include <string>


typedef enum e_level
{
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3,
	OTHER = 4,
} t_level;

class Harl {
	public:
		Harl();
		~Harl();
		Harl(const Harl &);
		Harl & operator=(const Harl &);
		void	complain(t_level level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif