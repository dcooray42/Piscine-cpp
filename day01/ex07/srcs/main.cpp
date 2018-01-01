#include "ClassReplace.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
		Replace	replace(argv[1], argv[2], argv[3]);
	else
		std::cout << "Usage : " << argv[0] << " [file descriptor] [string 1] [string 2]" << std::endl;
	return (0);
} 
