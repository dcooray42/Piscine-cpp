#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public	Form
{
public	:
	RobotomyRequestForm(std::string const & target);
	virtual ~RobotomyRequestForm(void);

	virtual void	execute(Bureaucrat const & executor);

private :
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & robotomyRequestForm);
	RobotomyRequestForm &	operator=(RobotomyRequestForm const & robotomyRequestForm);

	std::string	_target;
};

#endif
