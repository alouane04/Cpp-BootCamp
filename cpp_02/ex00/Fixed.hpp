/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:46:21 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/24 16:15:43 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					num;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed& operator=(const Fixed &other);

	void	setRawBits( int const num );
	int		getRawBits( void ) const;
};

#endif