#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	event;
	std::string	str;
	int	i;

	i = 0;
	std::srand(std::time(NULL));
	while (i++ < 5)
	{
		std::cout << "Enter a name : ";
		std::getline(std::cin, str);
		event.zombie = event.newZombie(str);
		event.zombie->announce();
		delete event.zombie;
	}
	i = 0;
	while (i++ < 50)
	{
		event.zombie = event.randomChump();
		event.zombie->announce();
		delete event.zombie;
	}
	return (0);
}
