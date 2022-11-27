/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:29:38 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 17:29:59 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Scav("alouane04");

	Scav.attack("another_alouane04");
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.guardGate();

	return (0);
}
