#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <sstream>

class	ShrubberyCreationForm : public	Form
{
public	:
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm(void);

	virtual void	execute(Bureaucrat const & executor);

private :
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & shrubberyCreationForm);
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & shrubberyCreationForm);

	std::string	_target;
};

#endif
