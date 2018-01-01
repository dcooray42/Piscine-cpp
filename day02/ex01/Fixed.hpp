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
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;

private	:
	int			_nb;
	static int const	_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & tmp);

#endif
