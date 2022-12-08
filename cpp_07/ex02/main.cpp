/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:59:28 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/08 21:29:18 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	int		intArr[5] = {1, 2, 3, 4, 5};
	char	charArr[5] = {'a', 'b', 'c', 'd', 'e'};

	Array<int>	intArray(5);
	Array<char>	charArray(5);

	// Array<int>	intArray2;
	// Array<char>	charArray2;

	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = intArr[i];
	
	for (unsigned int i = 0; i < charArray.size(); i++)
		charArray[i] = charArr[i];

	std::cout << intArray;
	
	std::cout << intArray[0] << std::endl;

	//std::cout << intArray[5]; will trow exeption out_of_range

	std::cout << charArray;

	std::cout << charArray[0] << std::endl;

	//std::cout << charArray[5]; will trow exeption out_of_range
}
