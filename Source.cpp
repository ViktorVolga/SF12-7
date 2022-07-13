#include <iostream>
#include <string>


bool isKperiodic(std::string& str, int k)
{
	if (k <= 0)
	{
		std::cout << "k <= 0 " << std::endl;
		return false;
	}
	for (int i = 0; i < str.size() - k; i++)
	{
		if (str[i] != str[i + k])
		{
			return false;
		}
	}	
		return true;
}

int main()
{
	std::string test{ "asdaasdaasdaasda" };
	bool x = isKperiodic(test, 3);
	std::cout << "is K Periodic for 3?" << std::endl;
	if (x)
	{
		std::cout << "yes" << std::endl;
	}
	if (!x)
	{
		std::cout << "no" << std::endl;
	}
	
	x = isKperiodic(test, 4);
	std::cout << "is K Periodic for 4?" << std::endl;

	if (x)
	{
		std::cout << "yes" << std::endl;
	}
	if (!x)
	{
		std::cout << "no" << std::endl;
	}
	
	std::cout << "is K Periodic for 0?" << std::endl;
	x = isKperiodic(test, 0);
	if (x)
	{
		std::cout << "yes" << std::endl;
	}
	if (!x)
	{
		std::cout << "any string periodic for 0" << std::endl;
	}

	return 0;
}
