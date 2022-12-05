/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:59:28 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 12:12:28 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Invalid num args" << std::endl, 1);
	if (av[1])
	{
		Cast	cast(av[1]);
		try
		{
			cast.check();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
