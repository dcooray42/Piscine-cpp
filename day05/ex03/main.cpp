#include "Intern.hpp"

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
	{
		Intern	someRandomIntern;
		Form	*rrf;
		Bureaucrat	bureaucrat("Dimitri", 1);

		rrf = someRandomIntern.makeForm("robotomy request", "Zakaria");
		rrf->execute(bureaucrat);
		rrf->beSigned(bureaucrat);
		rrf->execute(bureaucrat);
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Guyane");
		rrf->execute(bureaucrat);
		rrf->beSigned(bureaucrat);
		rrf->execute(bureaucrat);
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Donald Trump");
		rrf->execute(bureaucrat);
		rrf->beSigned(bureaucrat);
		rrf->execute(bureaucrat);
		delete rrf;
		rrf = someRandomIntern.makeForm("random function", "Jorys");
	}
	return (0);
}
