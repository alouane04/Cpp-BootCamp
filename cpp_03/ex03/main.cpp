/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:29:38 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/26 23:44:19 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	
    DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
	return (0);
}
