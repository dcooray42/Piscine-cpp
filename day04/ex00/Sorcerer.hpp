#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class	Sorcerer
{
public	:
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & sorcerer);
	~Sorcerer(void);
	Sorcerer &	operator=(Sorcerer const & sorcerer);

	void	polymorph(Victim const & victim) const;
	std::string const &	getName(void) const;
	std::string const &	getTitle(void) const;

private	:
	Sorcerer(void);

	std::string	_name;
	std::string	_title;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer);

#endif
