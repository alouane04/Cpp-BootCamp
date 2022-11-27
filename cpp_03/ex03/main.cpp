/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:29:38 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 12:44:39 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap me( "alouane04" );
    DiamondTrap me2( me );
    DiamondTrap me3("another_alouane04");

    me.whoAmI();
    me2.whoAmI();
    me3 = me;
    me3.whoAmI();

    me.attack( "another_another_alouane04" );
    me.takeDamage( 10 );
    me.beRepaired( 10 );
	return (0);
}
