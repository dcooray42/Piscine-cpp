#include "Bureaucrat.hpp"

int	main(void)
{
	{
		Bureaucrat	bureaucrat("Zakaria", 0);
		std::cout << bureaucrat;
	}
	{
		Bureaucrat	bureaucrat("Dimitri", 1);
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
	}
	{
		Bureaucrat	bureaucrat("Kevin", 2);
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
	}
	{
		Bureaucrat	bureaucrat("Jorys", 150);
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
	}
	Bureaucrat	bureaucrat("Andre", 151);
	std::cout << bureaucrat;
	return (0);
}
