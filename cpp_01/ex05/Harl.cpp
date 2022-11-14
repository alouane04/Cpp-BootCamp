/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:05:59 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/14 19:12:50 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	debug( void )
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-s"
			  << "pecialketchup burger. I really do!"
			  << std::endl;
}

void	info( void )
{
	std::cout << "I cannot believe adding extra bacon "
			  << "costs more money. You didn't put enough "
			  << "bacon in my burger! If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void	warning( void )
{
	std::cout << "I think I deserve to have some extra bacon "
			  << "for free. I've been coming for years whereas "
			  << "you started working here since last month."
			  << std::endl;
}

void	error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain( std::string level )
{
	
}
