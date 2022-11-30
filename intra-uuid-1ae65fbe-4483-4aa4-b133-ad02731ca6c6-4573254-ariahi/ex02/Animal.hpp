/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:54:36 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/30 11:42:00 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
	std::string	type;
public:
	Animal(std::string type);
	Animal(const Animal& other);
	Animal();
	virtual ~Animal();
	
	Animal&	operator=(const Animal& other);

	std::string	getType() const;
	virtual void	makeSound() const = 0;
};

#endif