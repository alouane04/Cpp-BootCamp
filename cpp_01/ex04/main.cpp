/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:13:55 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/14 16:35:17 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "invalid arg" << std::endl, 1);
	Replace	replace(av[1]);
	return (replace.replace(av[2], av[3]));
}
