#include "Pony.hpp"

int	main(void)
{
	Pony	ponyStack;
	Pony	*ponyHeap;

	ponyStack.ponyOnTheStack("Stack", "Brown", "1m29", "90 kg");
	ponyHeap = Pony::ponyOnTheHeap("Heap", "Black", "1m50", "120 kg");
	ponyStack.displayInfo();
	ponyHeap->displayInfo();
	delete ponyHeap;
	return (0);
}
