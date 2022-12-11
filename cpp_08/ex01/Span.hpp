/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:37:36 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/11 18:55:18 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	vec;
	unsigned int		N;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	~Span();

	Span&	operator=(const Span& other);
	
	void	addNumber(const int n);
	int		shortestSpan();
	int		longestSpan();

	void	rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	
};

#endif