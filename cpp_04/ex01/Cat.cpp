/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:04:40 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/30 10:17:18 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow hhh" << std::endl;
}
