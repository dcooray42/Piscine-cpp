#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form::Form("Presidential pardon form", 25, 5), _target("\0")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :	Form::Form("Presidential pardon form", 145, 137),
										_target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & presidentialPardonForm) : Form::Form("Presidential pardon form", 145, 137)
{
	*this = presidentialPardonForm;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & presidentialPardonForm)
{
	(void)presidentialPardonForm;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
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
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
