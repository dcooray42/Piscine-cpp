#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
public	:
	Victim(std::string const & name);
	Victim(Victim const & victim);
	virtual ~Victim(void);
	Victim &	operator=(Victim const & victim);

	virtual void		getPolymorphed(void) const;
	std::string const &	getName(void) const;

protected :
	std::string	_name;

private	:
	Victim(void);
};

std::ostream &	operator<<(std::ostream & o, Victim const & victim);

#endif
