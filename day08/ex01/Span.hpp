#ifndef SPAN_HPP
# define SPAN_HPP

# include <stdexcept>
# include <vector>

class	Span
{
public	:
	Span(unsigned int i);
	Span(Span const & span);
	~Span(void);

	void	addNumber(int i);
	int	shortestSpan(void);
	int	longestSpan(void);

private	:
	Span(void);
	Span &	operator=(Span const & span);

	std::vector<int>	_vect;
};

#endif
