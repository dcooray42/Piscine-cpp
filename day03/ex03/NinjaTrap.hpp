#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
public	:
	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & ninjatrap);
	~NinjaTrap(void);
	NinjaTrap &	operator=(NinjaTrap const & ninjatrap);

	void	ninjaShoebox(FragTrap const & fragtrap) const;
	void	ninjaShoebox(ScavTrap const & scavtrap) const;
	void	ninjaShoebox(NinjaTrap const & ninjatrap) const;
};

#endif
