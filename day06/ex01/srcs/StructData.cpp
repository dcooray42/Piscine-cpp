#include "StructData.hpp"

static char	randomAlphaNumericChar(void)
{
	char	str[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	random = std::rand() % 62;

	return (str[random]);
}

void *	serialize(void)
{
	SerData	*data = new SerData;
	int	i = 0;

	std::srand(std::time(NULL));
	while (i < 8)
	{
		data->s1[i] = randomAlphaNumericChar();
		i++;
	}
	data->s1[i] = '\0';
	data->n = std::rand();
	if (std::rand() % 2)
		data->n *= -1;
	i = 0;
	while (i < 8)
	{
		data->s2[i] = randomAlphaNumericChar();
		i++;
	}
	data->s2[i] = '\0';
	return (data);
}

struct Data *	deserialize(void * raw)
{
	SerData	*serData = reinterpret_cast<SerData *>(raw);
	Data	*data = new Data;

	data->s1 = static_cast<std::string>(serData->s1);
	data->n = serData->n;
	data->s2 = static_cast<std::string>(serData->s2);
	return (data);
}
