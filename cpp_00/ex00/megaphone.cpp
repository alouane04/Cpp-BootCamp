/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:41:17 by ariahi            #+#    #+#             */
/*   Updated: 2022/09/20 10:18:20 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;
	
	i = 1;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
	while (av[i])
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char) toupper(av[i][j]);
		i++; 
	}
	std::cout << std::endl;
}
