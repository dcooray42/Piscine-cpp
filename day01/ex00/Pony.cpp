#include "Pony.hpp"

Pony::Pony(void) :	_name("\0"),
			_color("\0"),
			_weight("\0"),
			_height("\0")
{
	return ;
}

Pony::~Pony(void)
{
	std::cout << "This message will be displayed if a pony called " << this->_name;
	std::cout << " has been freed." << std::endl;
	return ;
}

void	Pony::ponyOnTheStack(std::string name,
		std::string color, std::string height, std::string weight)
{
	this->_name = name;
	this->_color = color;
	this->_height = height;
	this->_weight = weight;

	std::cout << "This message will be displayed if a pony called " << this->_name;
	std::cout << " has been allocated on the stack." << std::endl; 
	return ;
}

Pony	*Pony::ponyOnTheHeap(std::string name,
		std::string color, std::string height, std::string weight)
{
	Pony	*horse = new Pony();

	horse->_name = name;
	horse->_color = color;
	horse->_height = height;
	horse->_weight = weight;
	std::cout << "This message will be displayed if a pony called " << horse->_name;
	std::cout << " has been allocated on the heap." << std::endl;
	return (horse);
}

void	Pony::displayInfo(void) const
{
	std::cout << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Color : " << this->_color << std::endl;
	std::cout << "Height : " << this->_height << std::endl;
	std::cout << "Weight : " << this->_weight << std::endl;
	std::cout << std::endl;
}
