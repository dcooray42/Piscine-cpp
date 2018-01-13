#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	{
		Bureaucrat	bureaucrat("Andre", 151);
		Form		form1("PG-16", 0, 151);
		Form		form2("PG-17", 151, 0);
		Form		form3("PG-18", 149, 150);
		Form		form4("PG-19", 150, 1);
		std::cout << form1;
		std::cout << form2;
		std::cout << form3;
		form1.beSigned(bureaucrat);
		form3.beSigned(bureaucrat);
		form4.beSigned(bureaucrat);
		form4.beSigned(bureaucrat);
		bureaucrat.signForm(form3);
		bureaucrat.incrementGrade();
		bureaucrat.signForm(form3);
		std::cout << bureaucrat;
	}
	return (0);
}
