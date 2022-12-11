#include "iostream"
#include <vector>
#include <algorithm>

int main()
{
	int	ar[] = {2, 10, 16, 30, 90};

	std::vector<int>	v(ar, ar + sizeof(ar) / sizeof(int));

	//std::vector<int>::iterator ptr;

	// if (std::find(vect.begin(), vect.end(), 6) != vect.end())
	// 	std::cout << "found" << std::endl;
	// else
	// 	std::cout << "not found" << std::endl;


	// for (ptr = arr.begin(); ptr < arr.end(); ptr++)
	// 	std::cout << *ptr << " ";

	std::cout << *(v.begin() + 1) << std::endl;
	std::vector<int>::iterator s = v.end() - 1;
	std::cout << *s++ << std::endl;
	// printf("%p\n", &*s++);
	// printf("%p\n", &*s++);
	// printf("%p", &*s);
	// for (int i = 0; i < v.size(); i++)
	// 	std::cout << v[i] << " ";

	std::sort(v.begin(), v.end());
	int ret = (*(v.begin() + 1)) - *(v.begin());
	std::cout << ret << std::endl;
    for (std::vector<int>::iterator t = v.begin(); t != v.end() - 1; t++)
        if (*(t + 1) - *t < ret)
            ret = *(t + 1) - *t;
	int	ar[] = {2, 10, 16, 30, 90};

	//std::cout << ret << std::endl;
	return (0);
}
