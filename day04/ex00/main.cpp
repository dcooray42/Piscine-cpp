#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim	jim("Jim");
	Peon	joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	{
		Victim	*jean = new Peon("Jean");
		Victim	&jeanne = *jean;

		std::cout << jeanne;

		robert.polymorph(jeanne);

		delete jean;
	}
	return (0);
}
