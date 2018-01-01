#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap	fragtrap("Dimitri");
	ScavTrap	scavtrap("Zakaria");
	NinjaTrap	ninjatrap("Jorys");

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
	ninjatrap.rangedAttack("Zakaria");
	ninjatrap.meleeAttack("Zakaria");
	ninjatrap.takeDamage(20);
	ninjatrap.takeDamage(20);
	ninjatrap.takeDamage(20);
	ninjatrap.takeDamage(20);
	ninjatrap.beRepaired(20);
	ninjatrap.beRepaired(20);
	ninjatrap.beRepaired(20);
	ninjatrap.beRepaired(20);
	ninjatrap.ninjaShoebox(fragtrap);
	ninjatrap.ninjaShoebox(scavtrap);
	ninjatrap.ninjaShoebox(ninjatrap);
	return (0);
}
