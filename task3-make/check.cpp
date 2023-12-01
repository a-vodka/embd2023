#include <iostream>

int Check(int comp_value, int value)
{
    if (comp_value == value)
    {
	std::cout << "You win! ^-^" << std::endl;
	return 0;
    }
    else
    {
	std::cout << "You lose! т_т" << std::endl;
	return 1;
    }
}