/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:47:55 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/25 10:51:56 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : n(0)
{
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::Fixed(const int i)
{
	n = roundf(i << this->bits);
}

Fixed::Fixed(const float num)
{
	n = roundf(num * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->n = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
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
	o << obj.toFloat();
	return (o);
}

/////////////////////////////////////////////// ex02

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->n > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->n < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->n >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->n <= other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->n != other.n);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->n == other.n);
}

//////////////////////////////////////////////////

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

////////////////////////////////////////////////////

Fixed&	Fixed::operator++(void)
{
	return (++this->n, *this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	return (this->n++, old);
}

Fixed&	Fixed::operator--(void)
{
	return (--this->n, *this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	return (this->n++, *this);
}

/////////////////////////////////////////////

Fixed&			Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&			Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const 	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
