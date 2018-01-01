#include "ZombieHorde.hpp"

int	main(void)
{
	std::string	str;
	int		i;

	std::srand(std::time(NULL));
	while (1)
	{
		std::cout << "Enter a number : ";
		std::getline(std::cin, str);
		i = std::stoi(str);
		if (i < 0)
			std::cout << "Enter a number above or equal to zero" << std::endl;
		else
			break ;
	}
	
	ZombieHorde	zombieHorde(i);
	zombieHorde.announce();
	return (0);
}
