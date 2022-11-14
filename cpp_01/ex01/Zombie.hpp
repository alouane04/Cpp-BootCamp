/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:58:54 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/12 16:56:42 by ariahi           ###   ########.fr       */
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
	Zombie();

	~Zombie();
	
	void	announce( void );
	
	void	setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif