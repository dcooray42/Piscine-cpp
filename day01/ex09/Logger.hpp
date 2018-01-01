#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <ctime>
# include <sstream>

class	Logger
{
public	:
	Logger(void);
	~Logger(void);

	void		(Logger::*f[2])(std::string const &);
	std::string	(Logger::*g)(std::string const &);

	void	log(std::string	const & dest, std::string const & message);

private	:
	std::ofstream	_ost;

	void	logToConsole(std::string const & str);
	void	logToFile(std::string const & str);
	std::string	makeLogEntry(std::string const & str);
};
#endif
