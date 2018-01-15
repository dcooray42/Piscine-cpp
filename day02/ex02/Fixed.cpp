#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	return ;
}

Fixed::Fixed(int const i) : _nb(i << Fixed::_bits)
{
	return ;
}

Fixed::Fixed(float const f)
{
	this->_nb = std::roundf(f * 256.0f);
	return ;
}

Fixed::Fixed(Fixed const & tmp)
{
	*this = tmp;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed &	Fixed::operator=(Fixed const & tmp)
{
	this->_nb = tmp.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & tmp)
{
	return (Fixed(this->toFloat() + tmp.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & tmp)
{
	return (Fixed(this->toFloat() - tmp.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & tmp)
{
	return (Fixed(this->toFloat() * tmp.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & tmp)
{
	return (Fixed(this->toFloat() / tmp.toFloat()));
}

bool	Fixed::operator>(Fixed const & tmp)
{
	return ((this->getRawBits() > tmp.getRawBits() ? 1 : 0));
}

bool	Fixed::operator<(Fixed const & tmp)
{
	return ((this->getRawBits() < tmp.getRawBits() ? 1 : 0));
}

bool	Fixed::operator>=(Fixed const & tmp)
{
	return (this->getRawBits() >= tmp.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<=(Fixed const & tmp)
{
	return (this->getRawBits() <= tmp.getRawBits() ? 1 : 0);
}

bool	Fixed::operator==(Fixed const & tmp)
{
	return (this->getRawBits() == tmp.getRawBits() ? 1 : 0);
}

bool	Fixed::operator!=(Fixed const & tmp)
{
	return (this->getRawBits() != tmp.getRawBits() ? 1 : 0);
}

Fixed &	Fixed::operator++(void)
{
	++this->_nb;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	fixed = *this;
	this->_nb++;
	return (fixed);
}

Fixed &	Fixed::operator--(void)
{
	--this->_nb;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	fixed = *this;
	this->_nb--;
	return (fixed);
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
	return (this->_nb >> Fixed::_bits);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	return ((a < b) ? a : b);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	return ((a._nb < b._nb) ? a : b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	return ((a > b) ? a : b);
}

Fixed const	& Fixed::max(Fixed const & a, Fixed const & b)
{
	return ((a._nb > b._nb) ? a : b);
}	

int const	Fixed::_bits = 8;
