#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>	tab(10);
	Array<float>	tab2(5);
	Array<int>	tab3(20);
	Array<int>	tab4;
	Array<int>	tab5(1);

	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	try
	{
		std::cout << "tab[11] = " << tab[11] << std::endl;
	}
	catch (std::exception const &out)
	{
		std::cerr << out.what() << std::endl;
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < tab2.size(); i++)
		std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < tab3.size(); i++)
		std::cout << "tab3[" << i << "] = " << tab3[i] << std::endl;
	std::cout << std::endl;
	tab3 = tab;
	for (unsigned int i = 0; i < tab3.size(); i++)
		std::cout << "tab3[" << i << "] = " << tab3[i] << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "tab4[0] = " << tab4[0] << std::endl;
	}
	catch (std::exception const & out)
	{
		std::cerr << out.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "tab5[1] = " << tab5[1] << std::endl;
	}
	catch (std::exception const &out)
	{
		std::cerr << out.what() << std::endl;
	}
	std::cout << std::endl;
	tab5 = tab;
	for (unsigned int i = 0; i < tab5.size(); i++)
		std::cout << "tab[" << i << "] = " << tab5[i] << std::endl;
	return (0);
}
