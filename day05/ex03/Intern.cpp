#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & intern)
{
	*this = intern;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern &	Intern::operator=(Intern const & intern)
{
	(void)intern;
	return (*this);
}

Form *	Intern::makeForm(std::string const & function, std::string const & target)
{
	try
	{
		if (!function.compare("shrubbery creation"))
			return (new ShrubberyCreationForm(target));
		if (!function.compare("robotomy request"))
			return (new RobotomyRequestForm(target));
		if (!function.compare("presidential pardon"))
			return (new PresidentialPardonForm(target));
		throw CorrectFunction::CorrectFunction();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what () << std::endl;
	}
	return (NULL);
}

Intern::CorrectFunction::CorrectFunction(void)
{
	return ;
}

Intern::CorrectFunction::CorrectFunction(CorrectFunction const & correctFunction)
{
	*this = correctFunction;
	return ;
}

Intern::CorrectFunction::~CorrectFunction(void) throw()
{
	return ;
}

Intern::CorrectFunction &	Intern::CorrectFunction::operator=(CorrectFunction const & correctFunction)
{
	(void)correctFunction;
	return (*this);
}

const char *	Intern::CorrectFunction::what(void) const throw()
{
	return ("Incorrect function name");
}
