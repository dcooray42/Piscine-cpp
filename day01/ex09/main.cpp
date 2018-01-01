#include "Logger.hpp"

int	main(void)
{
	Logger	logger;

	logger.log("admin", "Natsu");
	logger.log("admin", "Roger");
	logger.log("user", "Pedro");
	logger.log("user", "Michael");
	return (0);
}
