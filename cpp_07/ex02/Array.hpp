/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:59:52 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/09 09:15:45 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"
#include <stdexcept>

template <typename T>
class Array
{
private:
	T 				*array;
	unsigned int	len;

public:
	Array() : array(new T()), len(0) {};

	Array(unsigned int N) : array(new T[N]), len(N) {};

	Array(const Array &other)
	{
		this->array = NULL;
		*this = other;
	}

	~Array()
	{
		delete array;
	}
	
	Array&	operator=(const Array& other)
	{
		if (this != &other)
		{
			delete this->array;
			this->array = new T[other.size()];
			this->len = other.len;
		}
		return (*this);
	}

	T&	operator[](unsigned int n) const
	{
		if (n >= len)
			throw std::out_of_range ("index is out of bounds");
		return (array[n]);
	}

	unsigned int	size() const
	{
		return (len);
	}
};

template	<typename T>
std::ostream&	operator<<(std::ostream& out, const Array<T>& array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		out << array[i] << " ";
	std::cout << std::endl;
	return (out);
}

#endif