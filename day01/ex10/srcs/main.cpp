#include <iostream>
#include <string>
#include <fstream>
#include <cerrno>

int	main(int argc, char **argv)
{
	int	i;
	std::ifstream	ifs;
	std::string	str;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			errno = 0;
			ifs.open(argv[i]);
			if (!errno)
			{
				while (std::getline(ifs, str))
					std::cout << str << std::endl;
				if (errno == EISDIR)
					std::cerr << argv[0] << ": " << argv[i] << ": " << std::strerror(errno) << std::endl;
				ifs.close();
			}
			else
				std::cerr << argv[0] << ": " << argv[i] << ": " << std::strerror(errno) << std::endl;
			i++;
		}
	}
	else
	{
		while (std::getline(std::cin, str))
			std::cout << str << std::endl;
	}
	return (0);
}
