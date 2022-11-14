/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:58:40 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/12 14:27:58 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->zombie = name;
}

Zombie::~Zombie()
{
	std::cout << this->zombie << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->zombie << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
