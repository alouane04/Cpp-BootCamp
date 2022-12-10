#include "iostream"
#include <vector>
#include <algorithm>

int main()
{
	int	ar[] = {1, 2, 3, 4, 5};

	std::vector<int>	vect(ar, ar + sizeof(ar) / sizeof(int));

	//std::vector<int>::iterator ptr;

	if (std::find(vect.begin(), vect.end(), 6) != vect.end())
		std::cout << "found" << std::endl;
	else
		std::cout << "not found" << std::endl;


	// for (ptr = arr.begin(); ptr < arr.end(); ptr++)
	// 	std::cout << *ptr << " ";

	return (0);
}
