#include <iostream>

void	test1(int &tab)
{
	tab += 10;
	return ;
}

template<typename T>
void	test2(T & t)
{
	t += 10;
	return ;
}

template<typename T>
void	iter(T * t, int size, void (f)(T &))
{
	int	i = 0;

	while (i < size)
		f(t[i++]);
	return ;
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (int i = 0; i < 10; i++)
		std::cout << tab[i] << std::endl;
	std::cout << std::endl;
	iter<int>(tab, 10, test1);
	for (int i = 0; i < 10; i++)
		std::cout << tab[i] << std::endl;
	std::cout << std::endl;
	iter<int>(tab, 10, test2);
	for (int i = 0;	i < 10; i++)
		std::cout << tab[i] << std::endl;
	return (0);
}
