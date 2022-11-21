/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:46:21 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/21 16:06:06 by ariahi           ###   ########.fr       */
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
};

std::ostream & operator<<(std::ostream & o,const Fixed& obj);

#endif