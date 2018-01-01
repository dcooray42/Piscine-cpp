#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
public	:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & tmp);
	~Fixed(void);

	Fixed &	operator=(Fixed const & tmp);
	Fixed	operator+(Fixed const & tmp);
	Fixed	operator-(Fixed const & tmp);
	Fixed	operator*(Fixed const & tmp);
	Fixed	operator/(Fixed const & tmp);
	bool	operator>(Fixed const & tmp);
	bool	operator<(Fixed const & tmp);
	bool	operator>=(Fixed const & tmp);
	bool	operator<=(Fixed const & tmp);
	bool	operator==(Fixed const & tmp);
	bool	operator!=(Fixed const & tmp);
	Fixed &	operator++(void);
	Fixed	operator++(int);
	Fixed &	operator--(void);
	Fixed	operator--(int);
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	static	Fixed &	min(Fixed & a, Fixed & b);
	static	Fixed const &	min(Fixed const & a, Fixed const & b);
	static	Fixed & max(Fixed & a, Fixed & b);
	static	Fixed const &	max(Fixed const & a, Fixed const & b);

private	:
	int			_nb;
	static int const	_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & tmp);

#endif
