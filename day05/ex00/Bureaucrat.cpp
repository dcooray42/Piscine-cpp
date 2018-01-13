#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("\0"), _grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (this->_grade < 1)
		{
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException::GradeTooHighException();
		}
		if (this->_grade > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException::GradeTooLowException();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat)
{
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	(std::string)this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
	return (*this);
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	try
	{
		if (this->_grade < 1)
		{
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException::GradeTooHighException();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException::GradeTooLowException();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & gradeTooHighException)
{
	*this = gradeTooHighException;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & gradeTooHighException)
{
	(void)gradeTooHighException;
	return (*this);
}

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & gradeTooLowException)
{
	*this = gradeTooLowException;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & gradeTooLowException)
{
	(void)gradeTooLowException;
	return (*this);
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (o);
}
