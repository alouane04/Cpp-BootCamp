/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:30:15 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/26 21:44:04 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << " Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "FragTrap " << this->Name << " game" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->Name << " highFivesGuys" << std::endl;
	this->EnergyPoint--;
}
