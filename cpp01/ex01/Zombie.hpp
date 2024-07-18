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
		Zombie *next;
		void    announce(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name );

#endif