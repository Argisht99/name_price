#include "class.h"


int main()
{

	int count;
	std::cout << "Please insert product count ";
	std::cout << std::endl;
	std::cin >> count;
	std::cout << "Pleas insert product name  and price " << std::endl;
	std::string st;
	name_price A;
	for (int i = 0; i < count; ++i)
	{
		std::getline(std::cin >> std::ws, st);
		A.name_and_price(st);

	}
	std::cout << std::endl;
	std::cout << std::endl;
	A.print();
	return 0;
}