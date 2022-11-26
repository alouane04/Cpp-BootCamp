/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:09:49 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/26 23:43:50 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->Name = name;
	this->ClapTrap::Name = name + " clapNmame";

	FragTrap::HitPoint = 100;
	ScavTrap::EnergyPoint = 50;
	FragTrap::AttackDamage = 30;

	std::cout << "DiamondTrap: " << this->Name << " constructed" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->Name << " Destructed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DaimondTrap: " << this->Name
			  << " ClapTrap: " << ClapTrap::Name << std::endl;
}
