/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:58:02 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 20:05:38 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base*	a = generate();
	Base*	b = generate();
	Base*	c = generate();

	std::cout << "by addresse:" << std::endl;

	std::cout << "a = ";
	identify(a);
	
	std::cout << "b = ";
	identify(b);

	std::cout << "c = ";
	identify(c);

	std::cout << "by reference:" << std::endl;

	std::cout << "a = ";
	identify(a);

	std::cout << "b = ";
	identify(b);

	std::cout << "c = ";
	identify(b);
	
	return (delete a, delete b, delete c, 0);
}
