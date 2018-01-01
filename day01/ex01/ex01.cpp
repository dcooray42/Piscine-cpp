#include <iostream>

void	memoryLeaks(void)
{
	std::string	*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

int	main(void)
{
	memoryLeaks();
	return (1);
}
