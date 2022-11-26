/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:29:38 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/26 22:04:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	obj("alouane04");
	
	obj.attack("me");
	obj.takeDamage(10);
	obj.beRepaired(10);
	obj.highFivesGuys();

	return (0);
}
