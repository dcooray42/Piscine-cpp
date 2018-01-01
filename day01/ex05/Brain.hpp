#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class	Brain
{
public	:
	Brain(void);
	~Brain(void);

	std::string	identify(void) const;

private	:
	int	_size;
	int	_iq;

	static void	_strCapitalize(std::string & str);
};
#endif
