#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	fragtrap("Dimitri");
	ScavTrap	scavtrap("Zakaria");

	std::srand(std::time(NULL));
	fragtrap.rangedAttack("Zakaria");
	fragtrap.meleeAttack("Zakaria");
	fragtrap.takeDamage(50);
	fragtrap.takeDamage(50);
	fragtrap.takeDamage(50);
	fragtrap.takeDamage(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.vaulthunter_dot_exe("Zakaria");
	fragtrap.vaulthunter_dot_exe("Zakaria");
	fragtrap.vaulthunter_dot_exe("Zakaria");
	fragtrap.vaulthunter_dot_exe("Zakaria");
	fragtrap.vaulthunter_dot_exe("Zakaria");
	scavtrap.rangedAttack("himself");
	scavtrap.meleeAttack("himself");
	scavtrap.takeDamage(50);
	scavtrap.takeDamage(50);
	scavtrap.takeDamage(50);
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(50);
	scavtrap.beRepaired(50);
	scavtrap.beRepaired(50);
	scavtrap.challengeNewcomer("himself");
	scavtrap.challengeNewcomer("himself");
	scavtrap.challengeNewcomer("himself");
	scavtrap.challengeNewcomer("himself");
	scavtrap.challengeNewcomer("himself");
	return (0);
}
