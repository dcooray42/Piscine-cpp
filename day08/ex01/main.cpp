#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main()
{
	{
		Span	sp = Span(10000);

		std::srand(std::time(NULL));

		for (int i = 0; i < 10000; i++)
		{
			try
			{
				sp.addNumber(std::rand());
			}
			catch (std::logic_error const &le)
			{
				std::cerr << le.what() << std::endl;
			}
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span	sp(0);

		try
		{
			sp.addNumber(0);
		}
		catch (std::logic_error const &le)
		{
			std::cerr << le.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Span	sp(1);

		try
		{
			sp.addNumber(0);
		}
		catch (std::logic_error const &le)
		{
			std::cerr << le.what() << std::endl;
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::logic_error const &le)
		{
			std::cerr << le.what() << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::logic_error const &le)
		{
			std::cerr << le.what() << std::endl;
		}
	}
	return (0);
}
