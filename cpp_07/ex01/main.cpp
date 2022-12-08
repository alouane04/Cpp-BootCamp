/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:12:29 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/08 15:52:19 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int		array[5] = {1, 2, 3, 4, 5};
	int		len = sizeof(array) / 4;

	char	array2[5] = {'a', 'b', 'c', 'd', 'e'};
	int		len2 = sizeof(array2);

	float	array3[5] = {1.3, 2.4, 3.6, 4.6, 5.7};
	int		len3 = sizeof(array3) / 4;

	iter(array, len, &show);
	iter(array2, len2, &show);
	iter(array3, len3, &show);

	return (0);
}
