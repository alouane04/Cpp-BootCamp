/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:26:01 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 17:54:31 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default construcor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "Copy ScavTrap Destructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& other)
{
	this->Name = other.Name;
	this->HitPoint = other.EnergyPoint;
	this->EnergyPoint = other.EnergyPoint;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ScavTrap copy assignment operator constructor called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0)
	{	
		std::cout << "ScavTrap " << this->Name << "have no energypoint" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target 
			  << " , causing " << this->AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoint--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
