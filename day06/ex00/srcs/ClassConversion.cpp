#include "ClassConversion.hpp"

Conversion::Conversion(void) : _c(0), _i(0), _f(0.0f), _d(0.0)
{
	return ;
}

Conversion::Conversion(char c) : _c(c)
{
	_i = static_cast<int>(c);
	_f = static_cast<float>(c);
	_d = static_cast<double>(c);
	return ;
}

Conversion::Conversion(int i) : _i(i)
{
	_c = static_cast<char>(i);
	_f = static_cast<float>(i);
	_d = static_cast<double>(i);
	return ;
}

Conversion::Conversion(float f) : _f(f)
{
	_c = static_cast<char>(f);
	_i = static_cast<int>(f);
	_d = static_cast<double>(f);
	return ;
}

Conversion::Conversion(double d) : _d(d)
{
	_c = static_cast<char>(d);
	_i = static_cast<int>(d);
	_f = static_cast<float>(d);
	return ;
}

Conversion::Conversion(Conversion const & conversion)
{
	*this = conversion;
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion &	Conversion::operator=(Conversion const & conversion)
{
	this->_c = conversion._c;
	this->_i = conversion._i;
	this->_f = conversion._f;
	this->_d = conversion._d;
	return (*this);
}

char	Conversion::getChar(void) const
{
	return (this->_c);
}

int	Conversion::getInt(void) const
{
	return (this->_i);
}

float	Conversion::getFloat(void) const
{
	return (this->_f);
}

double	Conversion::getDouble(void) const
{
	return (this->_d);
}

std::ostream &	operator<<(std::ostream &o, Conversion const & conversion)
{
	char	c = conversion.getChar();
	int	i = conversion.getInt();
	float	f = conversion.getFloat();
	double	d = conversion.getDouble();

	std::cout << std::fixed << std::showpoint;
	o << "char: ";
	if (d < 0.0 || d > 125.0 || d != d)
		o << "Impossible" << std::endl;
	else if (c >= 0 && c < ' ')
		o << "Non displayable" << std::endl;
	else
		o << "\'" << c << "\'" << std::endl;
	o << "int: ";
	if (d != d || d < INT_MIN || d > INT_MAX || d == -HUGE_VAL || d == HUGE_VAL)
		o << "Impossible" << std::endl;
	else
		o << i << std::endl;
	o << "float: " << f << "f"<< std::endl;
	o << "double: " << d << std::endl;
	return (o);
}
