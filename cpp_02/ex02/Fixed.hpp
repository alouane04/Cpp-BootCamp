/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:46:21 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/22 18:31:44 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					n;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &f);
	Fixed(const int i);
	Fixed(const float num);
	Fixed& operator=(const Fixed &other);
	~Fixed(void);

	void	setRawBits( int const num );
	int		getRawBits( void ) const;

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
 
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed 		&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed 		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream & operator<<(std::ostream & o, const Fixed& obj);

#endif