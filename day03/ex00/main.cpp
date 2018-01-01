#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragtrap("Dimitri");

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
	return (0);
}
