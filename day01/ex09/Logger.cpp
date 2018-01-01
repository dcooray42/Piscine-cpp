#include "Logger.hpp"

Logger::Logger(void) : _ost("logFile.admin")
{
	this->f[0] = &Logger::logToConsole;
	this->f[1] = &Logger::logToFile;
	this->g = &Logger::makeLogEntry;
	return ;
}

Logger::~Logger(void)
{
	this->_ost.close();
	return ;
}

void	Logger::logToConsole(std::string const & str)
{
	std::cout << str << std::endl;
	return ;
}

void	Logger::logToFile(std::string const & str)
{
	this->_ost << str << std::endl;
	return ;
}

std::string	Logger::makeLogEntry(std::string const & str)
{
	time_t	now;
	tm	*ltm;
	std::ostringstream	ret;
	std::string		tmp;

	now = time(NULL);
	ltm = localtime(&now);
	ret << "[";
	ret << 1900 + ltm->tm_year;
	ret << "-";
	ret << 1 + ltm->tm_mon;
	ret << "-";
	ret << ltm->tm_mday;
	ret << " ";
	ret << 1 + ltm->tm_hour;
	ret << ":";
	ret << 1 + ltm->tm_min;
	ret << ":";
	ret << 1 + ltm->tm_sec;
	ret << "] ";
	ret << str;
	tmp = ret.str();
	return (tmp);
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	if (!dest.compare("user"))
		(this->*f[0])((this->*g)(message));
	else if (!dest.compare("admin"))
		(this->*f[1])((this->*g)(message));
	return ;
}
