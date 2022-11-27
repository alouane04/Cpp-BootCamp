/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:30:45 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 16:47:14 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default construcor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->Name = other.Name;
	this->HitPoint = other.EnergyPoint;
	this->EnergyPoint = other.EnergyPoint;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ClapTrap copy assignment operator constructor called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (EnergyPoint <= 0)
	{	
		std::cout << "ClapTrap " << Name << " have no energyPoint!" << std::endl;
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
		std::cout << "ClapTrap " << Name << " game over!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " take "
			  << amount << " points of damage!" << std::endl;
	HitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoint <= amount)
	{	
		std::cout << "ClapTrap " << Name << " have no energyPoint!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " repaired for "
			  << amount << " hit points" << std::endl;
	EnergyPoint--;
	HitPoint += amount;
}
