#include <iostream>

template<typename T>
void	swap(T & t, T & u)
{
	T	tmp = t;
	t = u;
	u = tmp;
	return ;
}

template<typename T>
T const &	min(T const & t, T const & u)
{
	return (t <= u ? t : u);
}

template<typename T>
T const &	max(T const & t, T const & u)
{
	return (t >= u ? t : u);
}

int	main(void)
{
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(a, b) = " << ::min(c, d) << std::endl;
	std::cout << "max(a, b) = " << ::max(c, d) << std::endl;

	return (0);
}
