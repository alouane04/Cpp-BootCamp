/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:46:21 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/17 16:43:53 by ariahi           ###   ########.fr       */
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
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed &other);
	~Fixed(void);

	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
};

#endif