/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:12:59 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/08 15:56:54 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template	<typename T> 
void	iter(T *array, int len, void (*f)(T &f))
{
	int	i;

	i = -1;
	while (len > ++i)
		if (array[i])
			f(array[i]);
	std::cout << std::endl;
}

template	<typename T>
void	show(T array)
{
	std::cout << array << " ";
}

#endif