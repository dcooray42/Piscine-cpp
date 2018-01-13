#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("Shrubbery creation form", 145, 137), _target("\0")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :	Form::Form("Shrubbery creation form", 145, 137),
										_target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrubberyCreationForm) : Form::Form("Shrubbery creation form", 145, 137)
{
	*this = shrubberyCreationForm;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubberyCreationForm)
{
	(void)shrubberyCreationForm;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	std::stringstream	str;
	std::ofstream		ofs;

	str << this->_target << "_shrubbery";
	if (!this->getSigned() || executor.getGrade() > this->getRequiredExecute())
	{
		std::cout << executor.getName() << " cannot execute " << this->getName() << " because ";
		if (!this->getSigned() && executor.getGrade() > this->getRequiredExecute())
		{
			std::cout << "the form isn't signed and the bureaucrat has a grade lower ";
			std::cout << "than the required grade asked by the form" << std::endl;
		}
		else if (!this->getSigned())
			std::cout << "the form isn't signed" << std::endl;
		else
			std::cout << "the bureaucrat has a grade lower than the required grade asked by the form" << std::endl;
		return ;
	}
	else
	{
		ofs.open(str.str());
		ofs << "              v .   ._, |_  .," << std::endl;
		ofs << "           `-._\\/  .  \\ /    |/_" << std::endl;
		ofs << "               \\\\  _\\, y | \\//" << std::endl;
		ofs << "         _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
		ofs << "           `7-,--.`._||  / / ," << std::endl;
		ofs << "           /'     `-. `./ / |/_.'" << std::endl;
		ofs << "                     |    |//" << std::endl;
		ofs << "                     |_    /" << std::endl;
		ofs << "                     |-   |" << std::endl;
		ofs << "                     |   =|" << std::endl;
		ofs << "                     |    |" << std::endl;
		ofs << "--------------------/ ,  . \\--------._" << std::endl;
		ofs.close();
		std::cout << "A shrubbery has been planted in " << this->_target << std::endl;
	}
	return ;
}
