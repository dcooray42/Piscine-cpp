#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human
{
public	:
	Human(void);
	~Human(void);

	Brain const	brain;

	std::string	identify(void) const;
	Brain const &	getBrain(void) const;
};
#endif
