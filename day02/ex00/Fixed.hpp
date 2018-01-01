#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
public	:
	Fixed(void);
	Fixed(Fixed const & tmp);
	~Fixed(void);

	Fixed &	operator=(Fixed const & tmp);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

private	:
	int			_nb;
	static int const	_bits;
};

#endif
