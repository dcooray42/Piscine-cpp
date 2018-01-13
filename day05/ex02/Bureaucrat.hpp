#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <string>
# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
public	:
	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat(void);

	void	incrementGrade(void);
	void	decrementGrade(void);
	std::string const &	getName(void) const;
	int	getGrade(void) const;
	void	signForm(Form & form);

	class	GradeTooHighException : public	std::exception
	{
	public	:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const & gradeTooHighException);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException &	operator=(GradeTooHighException const & gradeTooHighException);

		virtual const char *	what(void) const throw();
	};

	class	GradeTooLowException : public	std::exception
	{
	public	:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const & gradeTooLowException);
		virtual ~GradeTooLowException(void) throw();
		GradeTooLowException &	operator=(GradeTooLowException const & gradeTooLowException);

		virtual const char *	what(void) const throw();
	};

private	:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & bureaucrat);
	Bureaucrat &	operator=(Bureaucrat const & bureaucrat);

	std::string const	_name;
	int	_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif
