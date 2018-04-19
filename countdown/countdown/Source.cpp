#include<iostream>
#include<string>

int main()
{
	int yup;
	int VV;

	for (int i = 0; i <= 9; i++)
	{
		yup++;
		std::cout << yup << std::endl;
	}
	if (yup == 10)
	{
		std::cout << "blast off" << std::endl;
	}
	for (int i = 0; i >= -9; i--)
	{
		VV--;
		std::cout << VV << std::endl;
	}

	system("pause");
	return 0;
}
