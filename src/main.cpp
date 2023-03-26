#include <iostream>

//#define SPRING 1
//#define SUMMER 2
#define AUTUMN 3
//#define WINTER 4

int main()
{
	std::cout << "\tTask 23.2 SEASONS\n\n";

#if SPRING
	std::cout << "Spring\n";
#elif SUMMER
	std::cout << "Summer\n";
#elif AUTUMN
	std::cout << "Autumn\n";
#elif WINTER
	std::cout << "Winter\n";
#endif


	return 0;
}
