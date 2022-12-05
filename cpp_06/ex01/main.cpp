/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:58:10 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 16:53:41 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

int main()
{
	Data*		ptr = new Data;
	Data*		newptr;
	uintptr_t	raw;

	ptr->data = "alouane04";
	raw = serialize(ptr);
	newptr = deserialize(raw);
	
	std::cout << "original: " << ptr << std::endl;
	std::cout << "copy: " << newptr << std::endl;
	// std::cout << "copy2: " << raw << std::endl;

	return (0);
}
