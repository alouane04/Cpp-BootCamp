/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:58:54 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/12 14:28:08 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string zombie;
	
public:
	Zombie( std::string name );

	~Zombie();
	
	void	announce( void );
};

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

#endif