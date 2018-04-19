#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int main()
{
	int max, ranNum;
	max = 10;
	int userInt;

	srand(time(0));
	ranNum = (rand() % max) + 1;

	std::cout << "please choose a number from 1-10" << std::endl;
	std::cin >> userInt;

	if (userInt > ranNum)
	{
		std::cout << "too high" << std::endl;
	}

	if (userInt < ranNum)
	{
		std::cout << "too low" << std::endl;
	}

	if (userInt == ranNum)
	{
		std::cout << "You got it" << std::endl;
	}

	if (userInt > 10)
	{
		std::cout << "Not what i said" << std::endl;
	}


	system("pause");
	return 0;
}