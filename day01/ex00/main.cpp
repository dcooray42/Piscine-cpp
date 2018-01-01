#include "Pony.hpp"

int	main(void)
{
	Pony	ponyHeap;
	Pony	*ponyStack;

	ponyHeap.ponyOnTheHeap("Heap", "Brown", "1m29", "90 kg");
	ponyStack = Pony::ponyOnTheStack("Stack", "Black", "1m50", "120 kg");
	ponyHeap.displayInfo();
	ponyStack->displayInfo();
	delete ponyStack;
	return (0);
}
