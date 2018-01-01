#include "Human.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string	Human::identify(void) const
{
	return (this->brain.identify());
}

Brain const &	Human::getBrain(void) const
{
	return (this->brain);
}
