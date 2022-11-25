/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:46:21 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/24 17:32:05 by ariahi           ###   ########.fr       */
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
	Fixed(const Fixed &other);
	Fixed(const int i);
	Fixed(const float num);
	~Fixed(void);

	Fixed& operator=(const Fixed &other);

	void	setRawBits( int const num );
	int		getRawBits( void ) const;

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, const Fixed& obj);

#endif