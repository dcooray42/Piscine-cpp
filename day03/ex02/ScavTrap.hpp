#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <cstdlib>
# include <ctime>

class	ScavTrap : public ClapTrap
{
public	:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & scavtrap);
	~ScavTrap(void);
	ScavTrap &	operator=(ScavTrap const & scavtrap);

	void	challengeNewcomer(std::string const & target);
};

#endif
