/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:30:05 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 16:16:10 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string		Name;
	unsigned int	HitPoint;
	unsigned int	EnergyPoint;
	unsigned int	AttackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap();
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif