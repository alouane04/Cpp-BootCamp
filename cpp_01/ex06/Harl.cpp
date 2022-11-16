/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:05:59 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/16 15:27:04 by ariahi           ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-s"
			  << "pecialketchup burger. I really do!"
			  << std::endl  << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon "
			  << "costs more money. You didn't put enough "
			  << "bacon in my burger! If you did, I wouldn't be asking for more!"
			  << std::endl  << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon "
			  << "for free. I've been coming for years whereas "
			  << "you started working here since last month."
			  << std::endl  << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl  << std::endl;
}

void Harl::complain( std::string level )
{
	int	i = -1;
	std::string messages[] = {"debug", "info", "warning", "error"};

	while (++i < 4)
		if (!level.compare(messages[i]))
			break;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
		break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
