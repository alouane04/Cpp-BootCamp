/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:31:57 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/29 15:26:42 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.getType();
	std::cout << "WrongAnimal copy assignment operator constructor called" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "im out of here" << std::endl;
}
