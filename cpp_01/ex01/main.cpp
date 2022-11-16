/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:57:00 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/16 12:13:41 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie 		*zombies;
	const int	N = 3;

	zombies = zombieHorde(N, "alouane04");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
