// Large_memory_aloc_crash.cpp : Defines the entry point for the console application.
//

#include  <iostream>

int main()
{
	try
	{
		int* pTolarge = new int[0x1fffffff];
		delete[] pTolarge;
	}
	catch(std::bad_alloc)
	{
		std::cout << "Memory allocation failed. Terminating program...." << std::endl;
	}

    return 0;
}

