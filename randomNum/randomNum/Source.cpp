#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;
int main()
{
	int max, random_number;
	max = 10;

	srand(time(0));
	random_number = (rand() % max) + 1;

	cout << random_number << std::endl;
	system("pause");
	return 0;
}