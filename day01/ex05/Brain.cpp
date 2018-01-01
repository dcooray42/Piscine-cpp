#include "Brain.hpp"

Brain::Brain(void) : _size(0), _iq(0)
{
	(void)this->_size;
	(void)this->_iq;
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string	Brain::identify(void) const
{
	std::ostringstream	str;
	std::string		ret;

	str << this;
	ret = str.str();
	Brain::_strCapitalize(ret);
	return (ret);
}

void		Brain::_strCapitalize(std::string & str)
{
	size_t	i;

	i = 1;
	while (i++ < str.length())
		str[i] = std::toupper(str[i]);
	return ;
}
