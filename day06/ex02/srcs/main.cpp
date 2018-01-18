#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <exception>

Base *	generate(void)
{
	int	random;

	std::srand(std::time(NULL));
	random = std::rand() % 3;
	if (!random)
		return (new A);
	if (random == 1)
		return (new B);
	else
		return (new C);
}

void	identity_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
	return ;
}

void	identity_from_reference(Base & p)
{
	try
	{
		Base	&tmpA = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)tmpA;
	}
	catch (std::bad_cast &bcA)
	{
		try
		{
			Base	&tmpB = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)tmpB;
		}
		catch(std::bad_cast &bcB)
		{
			try
			{
				Base	&tmpC = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)tmpC;
			}
			catch (std::bad_cast &bcC)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}
	return ;
}

int	main(void)
{
	Base	*tmp = generate();
	identity_from_pointer(tmp);
	identity_from_reference(dynamic_cast<Base &>(*tmp));
	delete tmp;
	return (0);
}
