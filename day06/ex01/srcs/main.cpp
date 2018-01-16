#include "StructData.hpp"

int	main(void)
{
	void *tmp = serialize();
	struct Data	*data = deserialize(tmp);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
	return (0);
}
