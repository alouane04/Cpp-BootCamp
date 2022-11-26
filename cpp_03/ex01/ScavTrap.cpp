/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:26:01 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/26 17:20:06 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0)
	{	
		std::cout << "ScavTrap " << this->Name << "have no energypoint" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->Name << " attacks " << target
			  << " , causing "
			  << this->AttackDamage << " points of damage!" << std::endl;
	EnergyPoint--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " now in Gatekeeper mode" << std::endl;
}
