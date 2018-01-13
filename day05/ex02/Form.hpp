#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
public	:
	Form(std::string const & name, int const requiredSign, int const requiredExecute);
	virtual ~Form(void);

	std::string const &	getName(void) const;
	bool		getSigned(void) const;
	void		setSigned(void);
	int		getRequiredSign(void) const;
	int		getRequiredExecute(void) const;
	void		beSigned(Bureaucrat const & bureaucrat);
	virtual void	execute(Bureaucrat const & executor) = 0;

	class	GradeTooHighException : public	std::exception
	{
	public	:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const & gradeTooHighException);
		virtual	~GradeTooHighException(void) throw();
		GradeTooHighException &	operator=(GradeTooHighException const & gradeTooHighException);

		virtual const char *	what(void) const throw();
	};

	class	GradeTooLowException : public	std::exception
	{
	public	:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const & gradeTooLowException);
		virtual	~GradeTooLowException(void) throw();
		GradeTooLowException &	operator=(GradeTooLowException const & gradeTooLowException);

		virtual const char *	what(void) const throw();
	};

private	:
	Form(void);
	Form(Form const & form);
	Form &	operator=(Form const & form);

	std::string const	_name;
	bool		_signed;
	int const	_requiredSign;
	int const	_requiredExecute;
};

std::ostream &	operator<<(std::ostream & o, Form & form);

#endif
