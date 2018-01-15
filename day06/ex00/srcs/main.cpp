#include "ClassConversion.hpp"

int	isValid(std::string const & str)
{
	int	i = 0;
	int	point = 0;
	int	f = 0;

	if (str[0] >= ' ' && str[0] <= '~' && str[1] == '\0')
		return (1);
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (3);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (4);
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.' && str[i] != 'f')
			return (0);
		if (str[i] == '.')
			point++;
		if (str[i] == 'f' && str[i + 1] == '\0')
			f++;
		i++;
	}
	if (!point && !f)
		return (2);
	else if (point == 1 && f == 1)
		return (3);
	else if (point == 1 && !f)
		return (4);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	ret;
	Conversion convert;

	while (i < argc)
	{
		if ((ret = isValid(argv[i])) == 1)
			convert = Conversion(static_cast<char>(argv[i][0]));
		else if (ret == 2)
			convert = Conversion(std::atoi(argv[i]));
		else if (ret == 3)
			convert = Conversion(static_cast<float>(std::atof(argv[i])));
		else if (ret == 4)
			convert = Conversion(std::atof(argv[i]));
		else
			std::cout << "Invalid parameter" << std::endl;
		if (ret)
			std::cout << convert;
		i++;
	}
	return (0);
}
