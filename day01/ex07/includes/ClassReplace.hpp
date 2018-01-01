#ifndef CLASSREPLACE_HPP
# define CLASSREPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class	Replace
{
public	:
	Replace(std::string const input, std::string const s1, std::string const s2);
	~Replace(void);

private	:
	std::ifstream	_ifs;
	std::ofstream	_ofs;
	std::string	_s1;
	std::string	_s2;

	void	_writeInFile(void);
};

#endif
