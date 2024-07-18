#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>


class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		Zombie(const Zombie &);
		Zombie & operator=(const Zombie &);
		void    announce(void);
	private:
		std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif