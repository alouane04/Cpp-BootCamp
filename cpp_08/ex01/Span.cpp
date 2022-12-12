/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:38:14 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/12 15:56:50 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span()
{
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
		this->N = other.N;
	return (*this);
}

void	Span::addNumber(const int n)
{
	if (N <= vec.size())
		throw std::out_of_range ("reach the limit");
	vec.push_back(n);
}

int	Span::longestSpan()
{
	if (vec.empty() || vec.size() == 1)
		throw std::out_of_range ("vector is empty or have one element");
	int	min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());
	return (max - min);
}

int	Span::shortestSpan()
{
	if (vec.empty() || vec.size() == 1)
		throw std::out_of_range ("vector is empty or have one element");
	
	std::sort(vec.begin(), vec.end());
	int small = (*(vec.begin() + 1)) - *(vec.begin());
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end() - 1; it++)
		if (small > *(it + 1) - *it)
			small = *(it + 1) - *it;
	return (small);
}

void	Span::rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (N < vec.size())
		throw std::out_of_range ("reach the limit");
	vec.insert(vec.end(), begin, end);
}
