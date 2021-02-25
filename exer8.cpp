#include <iostream>
#include "Sales_item.h"

int BookstoreProgram()
{
	std::cout << "Please provide ISBNs as input." << std::endl;

	Sales_item total;

	if (std::cin>>total)
	{
		Sales_item trans;
		while (std::cin>>trans)
		{
			if (total.isbn()==trans.isbn())
			{
				total += trans;
			}
			else
			{
				std::cout << "Total: " << total << std::endl;
				total = trans;
			}
		}
		std::cout <<"Total: " << total << std::endl;
	}
	else
	{
		std::cerr << "No Data!" << std::endl;
		return -1;
	}
	return 0;
}

int main()
{
	return BookstoreProgram();
}