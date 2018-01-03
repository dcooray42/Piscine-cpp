#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
public	:
	Peon(std::string const & name);
	Peon(Peon const & peon);
	virtual ~Peon(void);
	Peon &	operator=(Peon const & peon);

	virtual void	getPolymorphed(void) const;
	std::string const &	getName(void) const;

private	:
	Peon(void);
};

#endif
