/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:53:32 by ariahi            #+#    #+#             */
/*   Updated: 2022/11/30 12:03:52 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal	animal; //object of abstract class type "Animal" is not allowed
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Dog	test;
	{
		Dog tmp = test;
	}

	const	Animal* animals[4] = {new Cat(), new Cat(), new Dog(), new Dog()};

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
