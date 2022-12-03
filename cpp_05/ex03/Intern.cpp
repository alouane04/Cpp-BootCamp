/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:34:48 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 23:02:16 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	int	i = -1;

	std::string	names[] = {"shrubbery creation", "robotomy request", "president pardon"};

	while (++i < 3)
		if (!name.compare(names[i]))
			break;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Intern get confuse about form " << name << std::endl;
	}
	return (nullptr);			
}
