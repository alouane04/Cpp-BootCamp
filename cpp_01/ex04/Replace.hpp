/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:16:33 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/14 12:22:42 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
private:
	std::string	i_file;
	std::string	o_file;
public:
	Replace(std::string filename);
	~Replace();

	int	replace(std::string s1, std::string s2);
};

#endif