#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int main()
{
	int max,dif,tries,userInt,random_number;
	userInt = 0;
	if (dif != 1, 2, 3)
	{
		std::cout << "please choose a difficulty 1 for easy(1-10), 2 for medium(1-50), 3 for hard(1-100)." << std::endl;
		std::cin >> dif;
	}
	else
	{
		std::cout << "that's not a choice please choose again" << std::endl;
	}

	if (dif == 1)
	{
		max = 10;
	}
	if (dif == 2)
	{
		max = 50;
	}
	if (dif == 3)
	{
		max = 100;
	}

	srand(time(0));
	random_number = (rand() % max) + 1;



	while (userInt != random_number)
	{

		std::cout << "Guess" << std::endl;
		std::cin >> userInt;
		tries++;
		if (userInt > random_number)
		{
			std::cout << "too high" << std::endl;
		}
		if (userInt < random_number)
		{
			std::cout << "too Low" << std::endl;
		}


	}
	if (userInt == random_number)
	{
		std::cout << "YAY you got it in " << tries << " tries" << std::endl;
	}

	system("pause");
	return 0;
}