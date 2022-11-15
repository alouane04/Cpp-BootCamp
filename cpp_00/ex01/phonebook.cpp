/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:26:24 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 07:26:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

bool	is_digit(std::string elm)
{
	int	i = 0;

	while (elm[i])
	{
		if (!isdigit(elm[i++]))
			return (false);
	}
	return (true);
}

bool	is_alpha(std::string elm)
{
	int	i = 0;

	while (elm[i])
	{
		if (!isalpha(elm[i++]))
			return (false);
	}
	return (true);
}

int	ft_atoi(std::string str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}

void	PhoneBook::ADD(void)
{
	std::string	str[5];

	std::cout << "firstName: " << std::endl;
	getline(std::cin, str[0]);
	if (std::cin.eof())
 		return ;
	std::cout << "lastName: " << std::endl;
	getline(std::cin, str[1]);
	if (std::cin.eof())
 		return ;
	std::cout << "nikeName: " << std::endl;
	getline(std::cin, str[2]);
	if (std::cin.eof())
 		return ;
	std::cout << "phoneNumber: " << std::endl;
	getline(std::cin, str[3]);
	if (std::cin.eof())
 		return ;
	std::cout << "darkestSecrect: " << std::endl;
	getline(std::cin, str[4]);
	if (std::cin.eof())
 		return ;
	if (str[0].empty() || str[1].empty() || str[2].empty() || str[3].empty() || str[4].empty()
		|| !is_alpha(str[0]) || !is_alpha(str[1]) || !is_alpha(str[2]) || !is_digit(str[3]) || !is_alpha(str[4]))
	{
		std::cout << "one of these input's is invalid try again" << std::endl;
		return ;
	}
	this->contact[this->index].Set_FirstName(str[0]);
	this->contact[this->index].Set_LastName(str[1]);
	this->contact[this->index].Set_NikeName(str[2]);
	this->contact[this->index].Set_PhoneNumber(str[3]);
	this->contact[this->index].Set_DarkestSecret(str[4]);
	this->contact[this->index].Set_Index(this->index);
	this->index += 1;
	if (this->index == 8)
		this->index = 0;
}

static std::string	str_cut(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9).replace(9, 1, ".");
	return (str);
}

static int	get_index(void)
{
	std::string	index;
	int			n;

	std::cout << "enter your wanted index: " << std::endl;
	getline(std::cin, index);
	if (std::cin.eof())
		std::exit(0);
	if (!is_digit(index))
		return (std::cout << "only digit!!!" << std::endl, -1);
	n = ft_atoi(index);
	if (n > 9 || n < 1)
		return (std::cout << "invalide index 1-8" << std::endl, -1);
	return (n);
}

void	PhoneBook::SEARCH(void)
{
	int	i = -1;

	if (this->contact[0].Get_FirstName().empty())
	{
		std::cout << "0 contact available" << std::endl;
		return ;
	}
	std::cout << "|     index|First Name| Last Name| Nick Name|" << std::endl;
	while (++i < 8)
	{
		if (this->contact[i].Get_FirstName().empty())
			break ;
		std::cout << "|"  << std::setw(10) << i + 1
		<< "|" << std::setw(10) << str_cut(this->contact[i].Get_FirstName())
		<< "|" << std::setw(10) << str_cut(this->contact[i].Get_LastName())
		<< "|" << std::setw(10) << str_cut(this->contact[i].Get_NikeName())
		<< "|" << std::endl;
	}
	i = get_index();
	if (i == -1)
		return ;
	if (this->contact[i - 1].Get_FirstName().empty())
	{
		std::cout << "empty contact" << std::endl;
		return ;
	}
	std::cout << "First Name:" << this->contact[i - 1].Get_FirstName() << std::endl;
	std::cout << "Last Name:" << this->contact[i - 1].Get_LastName() << std::endl;
	std::cout << "Nick Name:" << this->contact[i - 1].Get_NikeName() << std::endl;
	std::cout << "Phone Number:" << this->contact[i - 1].Get_PhoneNumber() << std::endl;
	std::cout << "Dark Secret:" << this->contact[i - 1].Get_DarkestSecret() << std::endl;
}
