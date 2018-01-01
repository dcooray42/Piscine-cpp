#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i) : _nb(i << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = std::roundf(f * 256.0f);
	return ;
}

Fixed::Fixed(Fixed const & tmp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & tmp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nb = tmp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_nb);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & tmp)
{
	o << tmp.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb / 256.0f);
}

int	Fixed::toInt(void) const
{
	return (this->_nb / 256);
}

int const	Fixed::_bits = 8;
