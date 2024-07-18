#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <sstream>
#include <string>


class Harl {
	public:
		Harl();
		~Harl();
		Harl(const Harl &);
		Harl & operator=(const Harl &);
		void	complain(std::string level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif