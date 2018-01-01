#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*pointer = &str;
	std::string	&reference = str;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}
