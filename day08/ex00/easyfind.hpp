#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <iostream>
# include <stdexcept>

template<typename T>
int	easyFind(T const & t, int nb)
{
	typename T::const_iterator	it = std::find(t.begin(), t.end(), nb);

	if (it != t.end())
		return (*it);
	throw std::logic_error("Didn't find");
}

#endif
