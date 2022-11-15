/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:05:59 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/15 12:32:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-s"
			  << "pecialketchup burger. I really do!"
			  << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon "
			  << "costs more money. You didn't put enough "
			  << "bacon in my burger! If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon "
			  << "for free. I've been coming for years whereas "
			  << "you started working here since last month."
			  << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain( std::string level )
{
 	void	(Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string messages[] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(messages[i]))
			 (this->*funcs[i])();
			 return;
	}
	std::cout << "inappropriate complain" << std::endl;
	return ;
}
