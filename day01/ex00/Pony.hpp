#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class	Pony
{
public	:
	Pony(void);
	~Pony(void);

	void		ponyOnTheHeap(std::string name, std::string color, std::string height, std::string weight);
	static Pony	*ponyOnTheStack(std::string name, std::string color, std::string height, std::string weight);
	void		displayInfo(void) const;

private	:
	std::string	_name;
	std::string	_color;
	std::string	_weight;
	std::string	_height;
};

#endif
