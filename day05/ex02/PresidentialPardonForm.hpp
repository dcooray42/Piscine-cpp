#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <sstream>

class	PresidentialPardonForm : public	Form
{
public	:
	PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm(void);

	virtual void	execute(Bureaucrat const & executor);

private :
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & presidentialParodonForm);
	PresidentialPardonForm &	operator=(PresidentialPardonForm const & presidentialPardonForm);

	std::string	_target;
};

#endif
