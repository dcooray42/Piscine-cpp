#include "Human.hpp"

void	Human::action(std::string const & action_name, std::string const & target)
{
	void	(Human::*f[3])(std::string const &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int	i;

	i = (!action_name.compare("meleeAttack") ? 0 : (!action_name.compare("rangedAttack") ? 1 :
		(!action_name.compare("intimidatingShout") ? 2 : -1)));
	if (i != -1)
		(this->*f[i])(target);
	return ;
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Pikachu melee attacked " << target << std::endl;
	return ;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Pikachu ranged attacked " << target << std::endl;
	return ;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Pikachu to " << target << " : I'm gonna put you six feet under " << std::endl;
	return ;
}
