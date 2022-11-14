/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:17:22 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/14 12:53:15 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string filename) : i_file(filename)
{
	this->o_file = this->i_file.append(".replace");
}

Replace::~Replace()
{
}

int	Replace::replace(std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	ini_file(this->i_file);
	size_t			found;
	
	if (!ini_file)
		return (std::cout << "Error opening file" << std::endl, 1);
	if (getline(ini_file, line, '\0'))
	{
		std::ofstream out_file(this->o_file);
		if (!out_file)
			return (std::cout << "Error opening file" << std::endl, 1);
		found = line.find(s1);
		
	}
	else
		std::cout << "empty file!" << std::endl;
	

	if (ini_file && out_file)
	{
		while (getline(ini_file, line))
			out_file << line << std::endl;
		std::cout << "done" << std::endl;
	}
	else
		std::cout << "cannot read file" << std::endl;
	ini_file.close();
	out_file.close();
	return (0);
}
