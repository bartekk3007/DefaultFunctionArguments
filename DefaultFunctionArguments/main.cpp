#include <iostream>

int addFourElements(int a, int b = 0, int c = 0, int d = 0)
{
	return a + b + c + d;
}

int main()
{
	std::cout << addFourElements(1, 2) << '\n';

	return 0;
}