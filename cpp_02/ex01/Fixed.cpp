/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:47:55 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/25 10:58:27 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	n = i << this->bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	n = roundf(num * (1 << this->bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->n = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	return (this->n);
}

void	Fixed::setRawBits( int const num )
{
	this->n = num;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->n / (float) (1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->n >> this->bits);
}

std::ostream & operator<<(std::ostream & o, const Fixed& obj)
{
	return (o << obj.toFloat(), o);
}
