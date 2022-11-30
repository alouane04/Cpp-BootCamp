/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:13:47 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/30 10:23:49 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define	BRAIN_HPP

#include "iostream"

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain&	operator=(const Brain& other);

};

#endif