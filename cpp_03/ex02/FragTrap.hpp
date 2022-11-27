/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:30:27 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/27 18:29:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap();
	~FragTrap();

	FragTrap & operator=(const FragTrap& other);

	void	highFivesGuys(void);
};

#endif