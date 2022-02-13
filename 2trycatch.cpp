#include <iostream>
int main()
{
	try {
		while(1)
		{
			int *ip = new int [100000];
		}
	}
	catch (std::bad_alloc &alc)
	{
		std::cout << "Caught Bad Alloc\n";
	}
	return 0;
}
