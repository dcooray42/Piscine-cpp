#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	lst;

	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(9);
	try
	{
		std::cout << easyFind(lst, 4) << std::endl;
	}
	catch (std::logic_error const &le)
	{
		std::cerr << le.what() << std::endl;
	}
	try
	{
		std::cout << easyFind(lst, 99) << std::endl;
	}
	catch (std::logic_error const &le)
	{
		std::cerr << le.what() << std::endl;
	}
	return (0);
}
