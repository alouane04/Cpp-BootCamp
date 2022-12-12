/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:35 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/12 21:47:32 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <queue>
#include <list>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(){};
	MutantStack(const MutantStack& other) {*this = other;}
	~MutantStack(){};

	MutantStack&	operator=(const MutantStack& other)
	{
		std::stack<T, Container>::operator=(other);
		*this = other;
	};

	typedef typename Container::iterator	iterator;

	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}
};

#endif