/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:34:48 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/04 00:13:43 by ariahi           ###   ########.fr       */
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

	Form*		forms[] = {new ShrubberyCreationForm(target),
						   new RobotomyRequestForm(target),
						   new PresidentialPardonForm(target)};

	while (++i < 3)
		if (!name.compare(names[i]))
			return (forms[i]);

	std::cout << "Intern get confuse about form " << name << std::endl;

	return (nullptr);			
}
