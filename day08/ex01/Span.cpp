#include "Span.hpp"

Span::Span(void)
{
	_vect.reserve(0);
	return ;
}

Span::Span(unsigned int i)
{
	_vect.reserve(static_cast<int>(i));
	return ;
}

Span::Span(Span const & span)
{
	*this = span;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &	Span::operator=(Span const & span)
{
	this->_vect = span._vect;
	return (*this);
}

void	Span::addNumber(int i)
{
	if (this->_vect.size() >= this->_vect.capacity())
		throw std::logic_error("Error: List full, can't add any number");
	else
		this->_vect.push_back(i);
	return ;
}

int	Span::shortestSpan(void)
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = this->_vect.end();
	int	minSpan;

	if (this->_vect.size() <= 1)
		throw std::logic_error("Error: This list contains 1 or less element, can't compute the shortest span");
	std::sort(this->_vect.begin(), ite);
	minSpan = this->_vect[1] - this->_vect[0];
	for (it = this->_vect.begin() + 2; it != ite; it++)
		minSpan = std::min(minSpan, *it - *(it - 1));
	return (minSpan);
}

int	Span::longestSpan(void)
{
	std::vector<int>::iterator	it = this->_vect.begin();
	std::vector<int>::iterator	ite = this->_vect.end();

	if (this->_vect.size() <= 1)
		throw std::logic_error("Error: This list contains 1 or less element, can't compute the longest span");
	return (*std::max_element(it, ite) - *std::min_element(it, ite));
}
