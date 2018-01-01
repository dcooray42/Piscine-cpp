#include "ClassReplace.hpp"

Replace::Replace(std::string const input, std::string const s1, std::string const s2) : _s1(s1), _s2(s2)
{
	std::string	str;

	this->_ifs.open(input);
	if (this->_ifs.is_open())
	{
		str = input;
		str += ".replace";
		this->_ofs.open(str);
		this->_writeInFile();
	}
	else
		std::cout << "Error : Can't open the file passed in parameter" << std::endl;
	return ;
}

Replace::~Replace(void)
{
	if (this->_ifs.is_open())
	{
		this->_ifs.close();
		this->_ofs.close();
	}
	return ;
}

void	Replace::_writeInFile(void)
{
	std::string	str;

	while (std::getline(this->_ifs, str))
	{
		if (!str.compare(this->_s1))
			this->_ofs << this->_s2 << std::endl;
		else
			this->_ofs << str << std::endl;
	}
	return ;
}
