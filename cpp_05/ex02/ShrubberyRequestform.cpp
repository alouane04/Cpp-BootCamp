/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyRequestform.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:52:25 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 00:05:45 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyRequestForm.hpp"

ShrubberyRequestForm::ShrubberyRequestForm()
{
}

ShrubberyRequestForm::ShrubberyRequestForm(const std::string& Target) : target(Target), Form("shrubberyform", 145, 137)
{	
}

ShrubberyRequestForm::ShrubberyRequestForm(const ShrubberyRequestForm& other) : Form(other), target(other.target)
{
}

ShrubberyRequestForm::~ShrubberyRequestForm()
{
}

ShrubberyRequestForm&	ShrubberyRequestForm::operator=(const ShrubberyRequestForm& other)
{
	(void)other;
	return (*this);
}

void	ShrubberyRequestForm::execute(const Bureaucrat& executer) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executer.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
}
