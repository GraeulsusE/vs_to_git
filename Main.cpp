#include "printVectorElems.h"


int main()
{
	std::vector<int> vec({ 1,2,3,4 });
	printVectorElems<int>(vec);
	std::cin.get();
	return 0;
}