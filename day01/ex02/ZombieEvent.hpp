#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class	ZombieEvent
{
public	:
	ZombieEvent(void);
	~ZombieEvent(void);

	Zombie	*zombie;

	void	setZombieType(Zombie *zombie);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);

private	:
	std::string	_name[100];
	std::string	_type[10];

	static void	_initName(std::string *_name);
	static void	_initType(std::string *_type);
};
#endif
