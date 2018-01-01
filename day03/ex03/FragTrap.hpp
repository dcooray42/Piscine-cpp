#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <cstdlib>
# include <ctime>

class	FragTrap : public ClapTrap
{
public	:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & fragtrap);
	~FragTrap(void);
	FragTrap &	operator=(FragTrap const & fragtrap);

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
