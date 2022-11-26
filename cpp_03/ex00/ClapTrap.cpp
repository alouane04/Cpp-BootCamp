/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:30:45 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/24 13:34:49 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->Name = other.Name;
	this->HitPoint = other.EnergyPoint;
	this->EnergyPoint = other.EnergyPoint;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (EnergyPoint <= 0)
	{	
		std::cout << "ClapTrap " << Name << "have no energypoint" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target
			  << " , causing "
			  << this->AttackDamage << " points of damage!" << std::endl;
	EnergyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (EnergyPoint <= amount)
	{	
		std::cout << "ClapTrap " << Name << "game over" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " takeDamage " << amount
			  << " , causing "
			  << this->AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoint <= amount)
	{	
		std::cout << "ClapTrap " << Name << "game over" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " beRepaired " << amount
			  << " , causing "
			  << this->AttackDamage << " points of damage!" << std::endl;
}
