/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:15:29 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/16 12:26:00 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:

	HumanB(std::string Name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &Name);
};

#endif