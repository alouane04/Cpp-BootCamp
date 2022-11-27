/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:29:38 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 17:55:17 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	frag("alouane04");
	
	FragTrap x(frag);
	frag.attack("me");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();

	return (0);
}
