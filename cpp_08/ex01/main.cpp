/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:37:14 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/12 16:15:10 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(111);
		//sp.addNumber(1);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "Test 2" << std::endl;
		try{
		std::vector<int>	vec(100000);
		std::srand(time(NULL));
		std::generate(vec.begin(), vec.end(), std::rand);
		Span sp = Span(vec.size()); 

		// for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); ++i) //To see inside the span
		// 	std::cout << *i << " ";

		sp.rangeOfIterators(vec.begin(), vec.end());
		
		//sp.addNumber(1); //To test the limits
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
