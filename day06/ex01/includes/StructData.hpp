#ifndef STRUCTDATA_HPP
# define STRUCTDATA_HPP

# include <ctime>
# include <cstdlib>
# include <string>
# include <iostream>
# include <sstream>

struct	Data
{
	std::string	s1;
	int		n;
	std::string	s2;
};

struct	SerData
{
	char	s1[9];
	int	n;
	char	s2[9];
};

void *	serialize(void);
Data *	deserialize(void * raw);

#endif
