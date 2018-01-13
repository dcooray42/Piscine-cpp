#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form::Form("Robotomy request form", 72, 45), _target("\0")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :	Form::Form("Robotomy request form", 72, 45),
									_target(target)
{
	std::srand(std::time(NULL));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robotomyRequestForm) : Form::Form("Robotomy request form", 145, 137)
{
	*this = robotomyRequestForm;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & robotomyRequestForm)
{
	(void)robotomyRequestForm;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	int	random;

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
		random = std::rand() % 2;
		if (!random)
			std::cout << "The robotomy of " << this->_target << " has failed" << std::endl;
		else
			std::cout << this->_target << " has been robotomized succesfully" << std::endl;
	}
	return ;
}
