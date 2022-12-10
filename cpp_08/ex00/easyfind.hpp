/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:33:49 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/10 22:08:32 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "iostream"
#include <vector>
#include <algorithm>

template <typename T>
void	easyfind(T &vec, int toFind)
{
	if (std::find(vec.begin(), vec.end(), toFind) != vec.end())
		std::cout << "found" << std::endl;
	else
		throw std::out_of_range ("not found");
}

#endif