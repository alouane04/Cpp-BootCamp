/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:36:07 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 14:46:53 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include "iostream"

struct Data
{
	std::string	data;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif