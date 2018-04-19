#include<iostream>
#include<string>

int main()
{
	int BookScanId;
	std::string BookOwner;
	std::cout << "please enter the book id number here." << std::endl;
	std::cin >> BookScanId;

		switch (BookScanId)

		{
		case 277364:
			BookOwner = "Mr.BROBRO";
			break;
		case 277361:
			BookOwner = "TRASH";
			break;
		case 277343:
			BookOwner = "AARON";
			break;
		case 277363:
			BookOwner = "BRADY";
			break;
		case 277346:
			BookOwner = "SHAWN";
			break;
		case 277357:
			BookOwner = "KANE";
			break;

		default:
			BookOwner = "invaled";
			break;
		}

		if (BookScanId == false)
		{
			std::cout << "invaled";
		}
		else
		{
			std::cout << BookOwner << std::endl;
		}

	

	system("pause");
	return 0;
}