#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


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
		Bureaucrat	bureaucrat("Dimitri", 1);
		Form		*form1 = new ShrubberyCreationForm("Martinique");
		Form		*form2 = new RobotomyRequestForm("Zakaria");
		Form		*form3 = new PresidentialPardonForm("Zakaria");
		form1->execute(bureaucrat);
		form1->beSigned(bureaucrat);
		form1->execute(bureaucrat);
		form2->execute(bureaucrat);
		form2->beSigned(bureaucrat);
		form2->execute(bureaucrat);
		form3->execute(bureaucrat);
		form3->beSigned(bureaucrat);
		form3->execute(bureaucrat);
		delete form1;
		delete form2;
		delete form3;
	}
	return (0);
}
