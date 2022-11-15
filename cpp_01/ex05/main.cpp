/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:06:08 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/15 12:25:33 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string	level;
	Harl		harl;

	std::cout << "entre the appropriate complain" << std::endl;
	std::cin >> level;
	harl.complain(level);
	return (0);
}
