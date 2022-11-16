/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:58:59 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/16 13:30:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:

	HumanA(std::string Name, Weapon &Type);
	~HumanA();

	void	attack(void);
};

#endif