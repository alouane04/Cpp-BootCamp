/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:57:00 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/24 09:53:15 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "_____________________ADDRESS________________________" << std::endl << std::endl;

	std::cout << "The memory address of str: " << &str << std::endl << std::endl;

	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl << std::endl;

	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "______________________VALUE_________________________" << std::endl << std::endl;

	std::cout << "The value of the string variable: " << str << std::endl << std::endl;

	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl << std::endl;

	std::cout << "the value pointed to by stringREF: " << stringREF << std::endl << std::endl;

	return (0);
}
