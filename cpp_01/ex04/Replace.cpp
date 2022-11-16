/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:17:22 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/16 20:38:59 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename) : i_file(filename), o_file(filename)
{
	this->o_file.append(".replace");
}

Replace::~Replace()
{
}

int	Replace::replace(std::string s1, std::string s2)
{
	std::ifstream	ini_file(this->i_file);
	std::string		line;
	size_t			found;

	if (!ini_file)
		return (std::cout << "Error opening file" << std::endl, 1);
	if (getline(ini_file, line, '\0'))
	{
		std::ofstream out_file(this->o_file);
		if (!out_file)
			return (std::cout << "Error opening file" << std::endl, 1);
		found = line.find(s1);
		while (found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1, ++found);
		}
		out_file << line;
		out_file.close();
	}
	else
		std::cout << "empty file!" << std::endl;
	return (ini_file.close(), 0);
}
