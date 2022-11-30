/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:04:01 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/30 15:06:24 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called"  << std::endl;
	this->brain = NULL;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		delete this->brain;
		this->type = other.getType();
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}
