/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:12:29 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/09 09:02:52 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int		array[5] = {1, 2, 3, 4, 5};
	int		len = sizeof(array) / sizeof(array[0]);

	char	array2[5] = {'a', 'b', 'c', 'd', 'e'};
	int		len2 = sizeof(array2);

	float	array3[5] = {1.3, 2.4, 3.6, 4.6, 5.7};
	int		len3 = sizeof(array3) / sizeof(array[0]);

	iter(array, len, &show);
	iter(array2, len2, &show);
	iter(array3, len3, &show);

	return (0);
}

// class Awsome{

// public:
//     Awsome(void): _n(42) {return;}
//     int get(void)const {return this->_n;}
// private:
//     int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

// template <typename T>
// void print(T const &x){std::cout << x << std::endl; return;}

// int main(){
//     int tab[] = {0,1,2,3,4};
//     Awsome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
// }
