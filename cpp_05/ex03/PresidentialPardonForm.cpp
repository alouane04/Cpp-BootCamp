/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:47:00 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 18:23:36 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Target) : Form("PresidentialPardonForm", 25, 5) ,target(Target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	(void)other;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executer) const
{
	if (executer.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
