#ifndef CLASSCONVERSION_HPP
# define CLASSCONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>

class	Conversion
{
public	:
	Conversion(void);
	Conversion(char c);
	Conversion(int i);
	Conversion(float f);
	Conversion(double d);
	Conversion(Conversion const & conversion);
	~Conversion(void);
	Conversion &	operator=(Conversion const & conversion);

	char	getChar(void) const;
	int	getInt(void) const;
	float	getFloat(void) const;
	double	getDouble(void) const;

private	:
	char	_c;
	int	_i;
	float	_f;
	double	_d;
};

std::ostream &	operator<<(std::ostream & o, Conversion const & conversion);

#endif
