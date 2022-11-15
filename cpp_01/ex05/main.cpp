/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:06:08 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/15 12:14:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string	msg;
	Harl		harl;

	std::cout << "entre the appropriate complain" << std::endl;
	std::cin >> msg;
	harl.complain(msg);
	return (0);
}