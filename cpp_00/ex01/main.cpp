/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:56:08 by marvin            #+#    #+#             */
/*   Updated: 2022/10/30 13:56:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
    std::string input;

    while (input.compare("EXIT"))
    {
		std::cout << "> ";
		getline(std::cin, input);
        if (!input.compare("ADD"))
		{
			input.erase();
			phonebook.ADD();
		}
		else if (!input.compare("SEARCH"))
			phonebook.SEARCH();
		else if (std::cin.eof())
			break ;
    }
	return (0);
}
 