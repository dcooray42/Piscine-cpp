#include "Form.hpp"

Form::Form(void) : _name("\0"), _signed(0), _requiredSign(150), _requiredExecute(150)
{
	return	;
}

Form::Form(std::string const & name, int const requiredSign, int const requiredExecute) :	_name(name),
												_signed(0),
												_requiredSign(requiredSign),
												_requiredExecute(requiredExecute)
{
	try
	{
		if (this->_requiredSign > 150)
			throw Form::GradeTooLowException::GradeTooLowException();
		if (this->_requiredSign < 1)
			throw Form::GradeTooHighException::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (this->_requiredExecute > 150)
			throw Form::GradeTooLowException::GradeTooLowException();
		if (this->_requiredExecute < 1)
			throw Form::GradeTooHighException::GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

Form::Form(Form const & form) : _requiredSign(150), _requiredExecute(150)
{
	*this = form;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &	Form::operator=(Form const & form)
{
	(void)form;
	return (*this);
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

void		Form::setSigned(void)
{
	this->_signed = 1;
	return ;
}

int		Form::getRequiredSign(void) const
{
	return (this->_requiredSign);
}

int		Form::getRequiredExecute(void) const
{
	return (this->_requiredExecute);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->_requiredSign)
			throw Form::GradeTooLowException::GradeTooLowException();
		else
		{
			if (!this->_signed)
			{
				this->_signed = 1;
				std::cout << bureaucrat.getName() << " signes " << this->_name << std::endl;
			}
			else
				std::cout << this->_name << " is already signed" << std::endl;
		}	
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

Form::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & gradeTooHighException)
{
	*this = gradeTooHighException;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(GradeTooHighException const & gradeTooHighException)
{
	(void)gradeTooHighException;
	return (*this);
}

const char *	Form::GradeTooHighException::what(void) const throw()
{
	return ("Form grade too high");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & gradeTooLowException)
{
	*this = gradeTooLowException;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(GradeTooLowException const & gradeTooLowException)
{
	(void)gradeTooLowException;
	return (*this);
}

const char *	Form::GradeTooLowException::what(void) const throw()
{
	return ("Form grade too low");
}

std::ostream &	operator<<(std::ostream & o, Form & form)
{
	o << form.getName() << " is ";
	if (!form.getSigned())
		o << "not signed ";
	else
		o << "signed ";
	o << "and needs a grade of " << form.getRequiredSign() << " to be signed ";
	o << "and a grade of " << form.getRequiredExecute() << " to be executed by bureaucrat." << std::endl;
	return (o);
}
